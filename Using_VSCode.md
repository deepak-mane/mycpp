# Using Mingw-w64 in VS Code
In this tutorial, you configure Visual Studio Code on Windows to use the GCC C++ compiler (g++) and GDB debugger in Mingw-w64 to create programs that run on Windows.

After configuring VS Code, you will compile and debug a simple program to get familiar with the VS Code user interface. After completing this tutorial, you will be ready to create and configure your own workspace, and to explore the VS Code documentation for further information about its many features. This tutorial does not teach you about GCC or Mingw-w64 or the C++ language. For those subjects, there are many good resources available on the Web.

If you have any problems, feel free to file an issue for this tutorial in the VS Code documentation repository.

### Prerequisites
To successfully complete this tutorial, you must do the following:
1. Install Visual Studio Code.
2. Install the C++ extension for VS Code.
3. Install Mingw-w64 to a folder that has no spaces in its path (in other words, NOT the default location of C:/Program Files/). In this tutorial, we assume it is installed under C:\Mingw-w64.
4. Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable.

In the Windows search box, type "cmd" and then choose Command prompt from the results list.
On the command line, use setx to add the Mingw-w64 path to the system path. The exact path depends on which version of Mingw-w64 you have installed and where you installed it. Here is an example: setx path "%path%;c:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin".
Close the console window because the new path is not available in it.

### Create a workspace
At a new Windows command prompt, create an empty folder called projects where you can place all your VS Code projects. Then create a sub-folder called helloworld, navigate into it, and open VS Code in that folder by entering the following commands:

mkdir projects
cd projects
mkdir helloworld
cd helloworld
code .
The code . command opens VS Code in the current working folder, which becomes your workspace. Before we can get IntelliSense support, or compile and debug our code, we have to configure VS Code for Mingw-w64. After completing the configuration, we will have three files in a .vscode sub-folder:

1. c_cpp_properties.json (compiler path and IntelliSense settings)
1. tasks.json (build instructions)
1. launch.json (debugger settings)

### Configure the compiler path
Press Ctrl+Shift+P to open the Command Palette. It looks like this:

1. Command Palette

Start typing "C/C++" and then choose Edit Configurations (UI) from the list of suggestions. This opens the C/C++ IntelliSense Configurations page. When you make changes here, VS Code writes them to a file called c_cpp_properties.json in the .vscode folder.

Command Palette

Find the Compiler path setting. VS Code will attempt to populate it with a default compiler based on what it finds on your system. It first looks for the MSVC compiler, then for g++ on Windows Subsystem for Linux (WSL), then for g++ on Mingw-w64. If you have Visual Studio or WSL installed, then you will need to change the compiler path here. If you installed Mingw-w64 version 8.1.0 under C:\mingw-w64, using Win32 threads and SEH exception handling, the path should look like this: C:\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe. If you chose different options when installing Mingw-w64, your path will be different.

The Compiler path setting is the most important setting in your configuration. The extension uses it to infer the path to the C++ standard library header files. When the extension knows where to find those files, it can provide lots of useful information to you as you write code. This information is called IntelliSense and you'll see some examples later in this tutorial.

1. Set IntelliSense mode to gcc-x64.

You only need to modify the Include path setting if your program includes header files that are not in your workspace or in the standard library path.

Visual Studio code places these settings in .vscode/c_cpp_properties.json. If you open that file directly, it should look like this (depending on your specific Mingw-w64 path):
```
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "${vcpkgRoot}/x86-windows/include"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.17763.0",
            "compilerPath": "C:\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\g++.exe",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "${default}"
        }
    ],
    "version": 4
}
```

### Create a build task
Next, create a tasks.json file to tell VS Code how to build (compile) the program. This task will invoke the g++ compiler to create an executable file based on the source code.

From the main menu, choose View > Command Palette and then type "task" and choose Tasks: Configure Default Build Task. In the dropdown, select Create tasks.json file from template, then choose Others. VS Code creates a minimal tasks.json file and opens it in the editor.

Go ahead and replace the entire file contents with the following code snippet:
```
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build hello world",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "-o",
                "helloworld",
                "helloworld.cpp"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```
The command setting specifies the program to run; in this case that is g++.exe. The args array specifies the command-line arguments that will be passed to g++. These arguments must be specified in the order expected by the compiler.

The label value is what you will see in the VS Code Command Palette; you can name this whatever you like.

The isDefault": true value in the group object specifies that this task will be run when you press Ctrl+Shift+B. This property is for convenience only; if you set it to false you'll have to run it from the Command Palette menu under Run Build Task.

### Configure debug settings
Next, we'll configure VS Code to launch the GCC debugger (gdb.exe) when you press F5.

From the Command Palette, type "launch" and then choose Debug: Open launch.json. Next, choose the GDB/LLDB environment.

For program, use the program name helloworld.exe (which matches what you specified in tasks.json). You will need to adjust your miDebuggerPath value to match the path to your Mingw-w64 installation.

By default, the C++ extension adds a breakpoint to the first line of main. The stopAtEntry value is set to true to cause the debugger to stop on that breakpoint. You can set this to false if you prefer to ignore it.

Optionally, set externalConsole to true to run the program in an external console.

Your complete launch.json file should look something like this:
```
{
     // Use IntelliSense to learn about possible attributes.
     // Hover to view descriptions of existing attributes.
     // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
     "version": "0.2.0",
     "configurations": [
         {
             "name": "(gdb) Launch",
             "type": "cppdbg",
             "request": "launch",
             "program": "${workspaceFolder}/helloworld.exe",
             "args": [],
             "stopAtEntry": true,
             "cwd": "${workspaceFolder}",
             "environment": [],
             "externalConsole": true,
             "MIMode": "gdb",
             "miDebuggerPath": "C:\\mingw-w64\\x86_64-8.1.0-win32-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
             "setupCommands": [
                 {
                     "description": "Enable pretty-printing for gdb",
                     "text": "-enable-pretty-printing",
                     "ignoreFailures": true
                 }
             ]
         }
     ]
}
```
VS Code is now configured to use Mingw-w64. The configuration applies to the current workspace. To reuse the configuration, just copy the three JSON files to a .vscode sub-folder in a new workspace and change the names of the source file(s) and executable as needed.

### The remaining steps are provided as an optional exercise to help you get familiar with the editing and debugging experience.

Add a source code file
In the main VS Code menu, click on File > New File and name it helloworld.cpp.

Paste in this source code:
```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
```

Now press Ctrl+S to save the file. Notice how all the files you have just edited appear in the File Explorer view in the left panel of VS Code:

File Explorer

This same panel is also used for source control, debugging, searching and replacing text, and managing extensions. The buttons on the left control those views. We'll look at the Debug View later in this tutorial. You can find out more about the other views in the VS Code documentation.

Explore IntelliSense
In your new helloworld.cpp file, hover over vector or string to see type information. After the declaration of the msg variable, start typing msg. as you would when calling a member function. You should immediately see a completion list that shows all the member functions, and a window that shows the type information for the msg object:

Statement completion IntelliSense

You can press the TAB key to insert the selected member; then, when you add the opening parenthesis, you will see information about any arguments that the function requires.

Build the program
To run the build task that you defined in tasks.json, press Ctrl+Shift+B or from the main menu choose View > Command Palette and start typing "Tasks: Run Build Task". The option will appear before you finish typing.

When the task starts, you should see the integrated Terminal window appear below the code editor. After the task completes, the terminal shows output from the compiler that indicates whether the build succeeded or failed. For a successful g++ build, the output looks something like this:

G++ build output in terminal

As the message instructs, press any key to close the build message; the terminal now returns to the shell command prompt.

Start a debugging session
You are now ready to run the program. Press F5 or from the main menu choose Debug > Start Debugging. Before you start stepping through the code, let's take a moment to notice several changes in the user interface:
The Terminal (View > Terminal) shows the command line that was used to start gdb. It shows the paths to the C++ extension, as well as to your mingw-w64 installation. In general, you should never need to be concerned with the details here:

$ env "c:\Users\username\.vscode\extensions\ms-vscode.cpptools-0.21.0\debugAdapters\bin\WindowsDebugLauncher.exe" --std
in=Microsoft-MIEngine-In-slkzoloe.km0 --stdout=Microsoft-MIEngine-Out-b2nqrdmk.cc2 --stderr=Microsoft-MIEngine-Error-
f42jy5qt.jfs --pid=Microsoft-MIEngine-Pid-32dwsmv3.tuh --dbgExe=C:/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw6
4/bin/gdb.exe --interpreter=mi
The Terminal will display the output from the program.

The code editor highlights the first statement in the main method. This is a breakpoint that the C++ extension automatically sets for you:

Initial breakpoint

The workspace pane on the left now shows debugging information. You'll see an example later in this tutorial.

At the top of the code editor, a debugging control panel appears. You can move this around the screen by grabbing the dots on the left side.

Debugging controls

Step through the code
Now we're ready to start stepping through the code.

Click or press the Step over icon in the debugging control panel.

Step over button

This will advance program execution to the first line of the for loop, and skip over all the internal function calls within the vector and string classes that are invoked when the msg variable is created and initialized. Notice the change in the Variables window on the left.

Debugging windows

In this case, the errors are expected because, although the variable names for the loop are now visible to the debugger, the statement has not executed yet, so there is nothing to read at this point. The contents of msg are visible, however, because that statement has completed.

Press Step over again to advance to the next statement in this program (skipping over all the internal code that is executed to initialize the loop). Now, the Variables window shows information about the loop variables. The program output appears in the Terminal tab (not the Debug Console or Output windows!).

Press Step over again to execute the cout statement.

If you like, you can keep pressing Step over until all the words in the vector have been printed to the console. But if you are curious, try pressing the Step Into button to step through source code in the C++ standard library!

Breakpoint in gcc standard library header

To return to your own code, one way is to keep pressing Step over. Another way is to set a breakpoint in your code by switching to the helloworld.cpp tab in the code editor, putting the insertion point somewhere on the cout statement inside the loop, and pressing F9. A red dot appears in the gutter on the left to indicate that a breakpoint has been set on this line.

Breakpoint in main

Then press F5 to start execution from the current line in the standard library header. Execution will break on cout. If you like, you can press F9 again to toggle off the breakpoint.

In the Debug Console tab, you can see diagnostic information that is output by GDB.

Set a watch
Sometimes you might want to keep track of the value of a variable as your program executes. You can do this by setting a watch on the variable.

Place the insertion point inside the loop. In the Watch window, click the plus sign and in the text box, type word, which is the name of the loop variable. Now view the Watch window as you step through the loop.

Watch window

Add another watch by adding this statement before the loop: int i = 0;. Then, inside the loop, add this statement: ++i;. Now add a watch for i as you did in the previous step.

To quickly view the value of any variable while execution is paused on a breakpoint, you can simply hover over it with the mouse pointer.

Mouse hover

Next steps
Explore the VS Code User Guide.
Review the Overview of the C++ extension.
Create a new workspace, copy your .json files to it, adjust the necessary settings for the new workspace path, program name, and so on, and start coding!
Was this documentation helpful?
