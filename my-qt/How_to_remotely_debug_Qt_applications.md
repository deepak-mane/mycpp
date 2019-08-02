# How to remotely debug Qt applications
[How_to_remotely_debug_Qt_applications](https://wiki.qt.io/How_to_remotely_debug_Qt_applications)

Contents
1. Introduction
   1.1.	Master
    1.2	Target
2. Setting up the virtual machines
    2.1	download needed files
    2.2	Install Virtualbox
    2.3	Create the virtual machines, with a virtual network between them
    2.4	Install Ubuntu on the virtual machine
    2.5	Clone the master virual machine to create the target
    2.6	Testing the Virtual Lan connection
3. Install Qt on the master PC
4. remote debug the application
    4.1	Create a new project on the master
    4.2	Connect to the target
    4.3	Deploy to the target

Introduction
This is a guide to write a Qt program on one virtual PC, and deploy and debug it on another virtual PC. As a first step, both virtual PC's are running linux. This guide assumes a windows 7 host system, but this should work on each platform that can run Virtualbox.

Master
This PC will be running the Qt IDE. This is where you will write the Qt program.

Target
This PC will be the target. This is where the Qt program will run. This PC has almost nothing installed, no IDE, no compilers, just a runtime

Setting up the virtual machines
download needed files
Download Virtual box and VirtualBox Extension Pack from this site: http://dlc-cdn.sun.com/virtualbox/5.1.18/index.html This tutorial has been tested with virtualbox 5.1.18. Next download Ubuntu from this site: http://releases.ubuntu.com/16.04.2/ This tutorial has been tested with Ubuntu 16.04.2 Desktop (32-bit)

Install Virtualbox
In windows, open VirtualBox-5.1.18-114002-Win.exe, and accept the defaults. Also accept the 4 prompts about device software installation. Then install Oracle_VM_VirtualBox_Extension_Pack-5.1.18.vbox-extpack by double-clicking the file. Then click install, scroll down the PUEL, and click 'I agree'

Create the virtual machines, with a virtual network between them
Start Virtualbox, click file-preferences-general. Set the default Machine Folder to a spacious location. Next click machine-new, set the name to Ubuntu-master, type linux, version Ubuntu (32 bit), next Set memory size to 1024MB, next, create a virtual hard drive now, create, VDI, next, Dynamically allocated, next, select size: 50BG. Select Ubuntu master, then click Settings-storage-CD icon-choose a virtual CD/DVD file... Then browse to ubuntu-16.04.2-desktop-i386.iso, and click open. Select Network, Adapter2, enable adapter, attached to internal network, change the name to: "virtualLAN". click OK.

Install Ubuntu on the virtual machine
Start Virtualbox, Select 'ubuntu-master', click run. In a new window 'Ubuntu-master [running]', ubuntu should boot from CD. If the installer does not react to the mouseclicks, use the tab, space and return keys to make the selections. Choose "Install Ubuntu". Select "Download updates while installing" and select "Install this third-party software", Continue. Choose "Erase disk and install ubuntu", and "Install Now", and "Continue". Next select your location, and choose "Continue". Next choose a keyboard layout and "Continue". Next choose a name and password. Choose "Ubuntu-Master" as the computer name, and select "log in automatically", and choose "Continue", after some time, choose "Restart Now", and press enter. Then the desktop is loaded.

Internet connection
Open a terminal (click top-left, search terminal). Check your internet connection with the following command:
```
$ ping www.google.com
...64 bytes from ... time ..ms
```
$ route
Destination Gateway ... default 10.0.2.2

Next click on the top-left networking icon, and choose "Connection information". Wired connection 1 is active, and has the default route 10.0.2.2

VirtualLAN connection
Click on the top-left networking icon, and choose "Edit connections" Select Wired connection 2, and choose edit. Select IPv4 Settings, and enter the following information: Method: Manual Addresses: 192.168.107.1 Netmask: 255.255.255.0 Gateway: 0.0.0.0 DNS servers: <empty> search domains: <empty> Next press "save" Click on the top-left networking icon, and choose "Wired connection 2 disconnect", and then "Wirend connection 2". Now the new settings for wired connection 2 are active.

Clone the master virual machine to create the target
Shut down the master virtual PC. Next goto Virtual Box, and select ubuntu-master. Now choose Machine-clone, and set the name to Ubuntu-target. Also enable "Reinitialize the MAC address of all network cards", and choose next. Choose "Linked clone", and clone http://www.sysprobs.com/linked-clone-virtualbox-how-to-clone-virtual-machine

Setting up the target machine
Start Virtualbox, Select 'Ubuntu-target', click start. After some time the desktop is loaded. Click system settings-Details. Change the device name from "Ubuntu-Master" to "Ubuntu-Target". Next logout and login, to let the new machine name take effect. Click on the top-left networking icon, and choose "Edit connections" Select Wired connection 3, and choose edit. Select IPv4 Settings, and enter the following information: Method: Manual Addresses: 192.168.107.2 Netmask: 255.255.255.0 Gateway: 0.0.0.0 DNS servers: <empty> search domains: <empty> Next press "save" Click on the top-left networking icon, and choose "Wired connection 3 disconnect", and then "Wirend connection 3". Now the new settings for wired connection 3 are active.

Testing the Virtual Lan connection
Start both the Ubuntu-master and the Ubuntu-target machine. On the master, enter the following command to ping the target: $ ping 192.168.107.2 On the slave, enter the following command to ping the master: $ping 192.168.107.1

Install Qt on the master PC
On the master, enter the following command:

$ sudo apt-get install qt-sdk 
Next type in your password, press Y and continue. After some time Qtcreator is installed.

remote debug the application
Start both the master and the target virtual machine.

Create a new project on the master
On the master start Qt Creator. Select new project-applications-QT Widgets Application-choose. Pick a name and a location, and click next. select the kit "Desktop", and click next. Choose the names for the classed etc, and press next. Choose <None> for version control, and press finish.

Connect to the target
In Qt Creator, Click on projects at the left side. Then click Manage Kits... This will open the options screen. Then select devices, and click Add... Generic Linux Device, start wizzard. Enter the following settings: Name: ubuntu-target IP: 192.168.107.2 User: <your username> authentication type: password password: <your password> choose next and finish. Now the error "SSH connection failure: Connection refused" comes up. Click close

On the target, enter the following command:
```
$ sudo apt-get install openssh-server
```
Next type in your password, press Y and continue. After some time openssh-server is installed.

on ubuntu-master, select ubuntu-target, and click test. Now the device test succeeds. Click close and OK.

Deploy to the target
In Qt Creator on ubuntu-master, click projects, Manage Kits... This will open the options screen. Now click Build & Run, Kits, Add. Enter the following settings:
```
name: ubuntu-target
file system name: <empty>
Device type: generic linux device
Device: ubuntu-target
Sysroot: <empty>
Compiler GCC (x86 32 bit in /usr/bin)
Debugger: System GDB at /usr/bin/gdb
Qt version: Qt 4.8.7 in PATH (qt4)
Cmake Tool: System cmake at /usr/bin/cmake
Click OK
```
In projects-untiteld-Build & Run click add Kit-ubuntu-target.

Now Click the Edit tile at the left, then open the .pro file and add the lines
```
target.path = /path/where/to/deploy
INSTALLS += target
```
The /path/where/to/deploy is the directory in which the executable will be deployed, so be sure that it exists on the target and the user you chose has writing permissions to it.

In Qt creator click the little arrow next to debug, and select ubuntu-target debug. Now click the green arrow with the bug on top (Start Debugging).

In the "Application output" window, you should see the following messages:
```
Debugging starts
Listening on port 10000
Remote debugging from host 192.168.107.1
File transfers from remote targets can be slow. Use "set sysroot" to access files locally instead.
Process /untitled-qt-app/untitled created; pid = 4548
```
On the target, pstree shows the following line:
```
sshd---sshd---sshd---bash---gdbserver---untitled---untitled
```
