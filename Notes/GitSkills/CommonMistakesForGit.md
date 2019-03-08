
# CommonMistakesForGit
## 关于git 常见问题及报错整理：
### 1. git 远程库与本地库不一致造成的版本冲突问题：
当我们在github版本库中发现一个问题后，你在github上对它进行了在线的修改；或者你直接在github上的某个库中添加readme文件或者其他什么文件，但是没有对本地库进行同步。这个时候当你再次有commit想要从本地库提交到远程的github库中时就会出现push失败的问题。如：
```git
$ git push origin master
To git@github.com:xxx/xxx.git
! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/xxx/xxx.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```
这个问题是因为远程库与本地库不一致造成的，那么我们把远程库同步到本地库就可以了。 
使用指令：
```git
git pull --rebase origin master
```
这条指令的意思是把远程库中的更新合并到本地库中，–rebase的作用是取消掉本地库中刚刚的commit，并把他们接到更新后的版本库之中。

这个例子的话，然后再执行 `git push origin master` 就OK了。

### 2. git 的 SSL 错误：
类似的报错如：
```git
error: RPC failed; curl 56 OpenSSL SSL_read: SSL_ERROR_SYSCALL, errno 10054
fatal: the remote end hung up unexpectedly
fatal: ...
```
因为服务器的SSL证书没有经过第三方机构的签署，所以才报错。解决方案如下： 
第一步，克隆远程仓库时，用env命令设置GIT_SSL_NO_VERIFY环境变量为”ture”，并同时执行你想执行的命令如 `git push -u origin master` 等。完整的命令如下：<br/>
```git
env GIT_SSL_NO_VERIFY=true git push -u origin master
```

第二步，在克隆完毕的仓库中将http.sslVerify设置为”false”。完整的命令如下：
```git
git config http.sslVerify "false"
```

**注：** 第一步使用env命令保证了忽略证书错误是单次行为，不会成为默认的设置。第二次，则把忽略证书错误的设置限定在特定的仓库，避免扩大该设置的适用范围而引起的潜在安全风险。
