<p align="center">
    <h1 align="center">Anurag Hazra</h1>
</p> 
![](src/loading.jpg)



---

## How to Use this app:-

### Install code-block and run Graphics
1. Download and install 
[Codeblock](https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download)
1. Set Graphics in codeblock [Click here](https://drive.google.com/file/d/1SnhzqNg5cn7Bgsnqh9I5W6DjxRmmqzW7/view?usp=sharing)
1. When above steps are completed then open this Repo as a project in code-block.

---

### Code to be change

#### Loading Screen Image set
In line number 193 under loadingscreen() function
```
readimagefile("C:\\Users\\Acer\\Desktop\\nabincodeblockcheck\\1.2\\Final Projec\\src\\loading.jpg",0,0,getmaxx(),500);
```
Replace the above path to you current clone Repo path like
```
readimagefile("this Repo path \\src\\loading.jpg",0,0,getmaxx(),500);
```


#### Image on Console
As readimagefile read the image from local path Now we have to give set  image path for rest of readimagefile function
```
readimagefile("C:\\Users\\Acer\\Desktop\\nabincodeblockcheck\\1.2\\Final Projec\\src\\mypic.jpg",40,30,500,500);
```
to 
```
readimagefile("This Repo path \\ src\\mypic.jpg",40,30,500,500);
```
on line number  `659` and `910` 
