# CPP WebServers and API

## Building Docker Images
1. Installing Docker

1. Creating Docker Container

1. Adding Volume to Docker Image
```sh
<deeps@sdcndub:/home/deeps/Desktop/cppweb
>docker run -v ~/Desktop/cppweb:/usr/src/cppweb -ti cppbox:latest bash
root@ec971e533dd7:/# cd /usr/src/cppweb
root@ec971e533dd7:/usr/src/cppweb# ls
cppbox
root@ec971e533dd7:/usr/src/cppweb# touch MY_FILE.txt
```
