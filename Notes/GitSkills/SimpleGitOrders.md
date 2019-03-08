# There are some simple git orders:

## 一、Git 主分支提交文件
*以文件夹learngit 和 文件readme.txt为例：*
```git

$ mkdir learngit
$ cd learngit  //创建一个空目录
$ pwd          //显示当前目录
$ git init     //把此目录变为Git可以管理的仓库
$ git add readme.txt //把文件添加到版本仓库
$ git add .          //添加包括子目录，但不包括空目录的所有文件
$ git commit -m "wrote a readme file"  //把文件提交到仓库，-m ""后输入的是本次提交的说明（有意义的）

GitHub 上创建远程仓库:
$ git remote add origin git@github.com:CQwdxjoy/GithubFiles.git    //关联GitHub账户的远程库
$ git push -u origin master   //第一次把本地库的内容推送到远程
$ git push origin master      //之后推送该本地库内容到远程库

创建README.md文件并进行提交：
$ echo "Hello World" > README.md   //创建README.md文件，并在其中增加 Hello World
$ git add README.md                //提交该文件
$ git commit -m "add a README.md file"
```

## 二、git 上传本地分支到 github 项目分支

1. 初始化仓库：`git init` 
2. 上传文件，如：`git add *` ( * 可替换成具体要上传的文件名，* 表示提交所有有变化的文件) 
3. 添加上传文件的描述：`git commit -m "branch01 add file" `
4. 创建分支：`git branch branch01` （ branch01 为分支名）
5. 切换分支：`git checkout branch01`
6. 与远程仓库相关联：`git remote add origin git@github.com:Dawsson/Practices.git`
7. 将分支上传：`git push origin branch01`




