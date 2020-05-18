# Block-This-Website
A Very Simple Website Blocker in C

## The Idea
Just a little experiment with blocking a website by modifying the "hosts" file (a file made by the operating system).When the
user wants to block a website, a new line is added to the hosts file which will be  "0.0.0.0 "url" ".After that, everytime 
this url is entered on a web browser,the user will be redirected to the server with I.P address 0.0.0.0 instead of the actual 
Website IP address.For more information,read the following article:


https://www.howtogeek.com/howto/27350/beginner-geek-how-to-edit-your-hosts-file/


### How to Use
After compiling the code,run the executable with Administrator Rights (it's necessary because otherwise there will be no access
to "hosts" file) and type the full url of the website you want to block.Exit the executable,start your browser and ,hopefully,
you will no longer have access to this website.

### Limitations
Now works only on Windows 10
