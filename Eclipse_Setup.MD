# Eclipse Setup

## For developing in a windows workstation, compiling in a linux server. This is what I ended doing:

- Setup a passwordless login to the compiler server with putty, for example you can follow this tutorial.
- Create a login session with putty, make sure that in Connections/SSH/Auth is pointing to your private key.
- Modify eclipse make command to plink.exe -load "saved_session" make -C /remote/path/project (This setting is in Project/Properties/C++Build/Builder Settings/Build command). You can automate this with a batch/shell file if you have to pass more parameters and/or your setup is more complex.
- If you have stored a passphrase with your private key then you can use pageant.exe to load your key only once, so you dont have to type your passphrase every time.
