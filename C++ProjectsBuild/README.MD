# Portfolio of C++ Projects Build 

## 1. Cobol compiler for Peoplesoft Environments
This consists of a Windows Desktop Application with a Qt GUI front end. Select users will have access to run this application who have been granted access by the Administrator. As there would be few users (3-4 only) users would be created and saved in the database of the application.

Usually in any Peoplesoft Development environment users install the cobol compilers on single jump server. PeopleSoft Administrator's job is to 
+ Maintain the PeopleTools Version of server on which the Cobol Compiler is installed in line with the rest of env.
+ Every time cobols are needed to be compiled, they have to manual copy the src/cbl from the source to this jump server 
+ Run cobol compiler and zip(tar) the compiled binaries
+ Copy the tar files to the Target PeopleSoft env locations and untar them

Drawbacks:
+ During the copying of the src/cbl files, they get corrupted/missed and it comes to realization only when the env is delivered to developemnt team. This leads to loss of service/time until the issue is rectified and mitigated
+ Beacuase of Manual approach of compiling cobols in this way, its cubersome
+ Compiling code at frequent basis and without the help of PeopleSoft Administrators is not possible

Advantges:
+ Beacuase the tool will copy the src/cbl from source and place the compiled binaries in Target env, chances of corruptiuon/missing file is reduced.
+ Turnaround time could increase as this tool can be made self-service which would increase productivity of development team




## 2. Enterprise Applications Monitoring And Booter

## 3. Google Search for Home

## 4. Enterprise SOX Report Generator

