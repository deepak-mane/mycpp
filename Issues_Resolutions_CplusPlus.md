# Issues Resolutions C++

- [Youtube : Using the Eclipse Debugger](https://www.youtube.com/watch?v=9gAjIQc4bPU)
- [Handy Resource Link](http://max.berger.name.s3-website-us-east-1.amazonaws.com/howto/cdt/ar01s05.html)

### 1. Eclipse CDT project built but “Launch Failed. Binary Not Found”
Projects do compile executables generated, but Eclipse can't see them; therefore 'Run' fails. Executables are placed in Debug directory. Double click or command prompt call on compiled executable works without problem.

- Solution

This happened to me and I found a solution, see if this works for you:
Once you have built your project with the hammer icon:

1. Select "Run".
2. Run Configurations.
3. Choose "C++ Application".
4. Click on the "New Launch Configuration" icon on the top left of the open window.
5. Select "Browse" under the C/C++ Application.
6. Browse to the folder where you made your project initially.
7. Enter the Debug folder.
8. Click on the binary file with the same name as the project.
9. Select "OK".
10. Click "Apply" to confirm the link you just set.
11. Close that window.
Afterwards you should be able to run the project as much as you'd like.
Hopefully this works for you.
