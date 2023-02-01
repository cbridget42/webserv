# webserv
This is when you finally understand why a URL starts  
with HTTP

### Summary:
This project is about writing your ow HTTP server.  
You will be able to test it with an actual browser.  
HTTP is one of the most used protocols on the internet.  

### Requirements:
* Your server must never block and the client can be bounced properly if necessary.
* It must be non-blocking and use only 1 poll() (or equivalent) for all the I/O  
operations between the client and the server (listen included).
* You must never do a read or a write operation without going through poll() (or  
equivalent).
* A request to your server should never hang forever.
* We will consider that NGINX is HTTP 1.1 compliant and may be used to compare  
headers and answer behaviors.
* Your HTTP response status codes must be accurate.
* You must be able to serve a fully static website.
* You need at least GET, POST, and DELETE methods.
* Stress tests your server. It must stay available at all cost.

The executable will be run as follows:  
```bash
./webserv [configuration file]
 ```

You can see the full assignment here [subject](https://github.com/cbridget42/webserv/blob/main/subject/en.subject.pdf)

### Configuration file example:
```
server {
	listen 127.0.0.1:4242
	root static
	error_pages 404.html
	autoindex on
	methods GET
	location /upload {
		root server1/upload
		methods GET, POST, DELETE
		max_body_size 4000000
	}
}

server {
	listen 127.0.0.1:2121
	root static/test
	autoindex off
	methods GET
}
```
### Description of directives:
* Listen : The address that the web server will listen on.  
* Root : path to your files.  
* Methods : allowed methods for this path.  
* Max_body_size : maximum file size that can be uploaded to the server.  
* Index : returned file if a folder is requested.  
* Autoindex : if a folder is requested will produce the listing directory.  
* Bin_path : path to binary file.  
