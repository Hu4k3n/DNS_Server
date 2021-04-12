![Screenshot from 2021-04-12 14-09-52](https://user-images.githubusercontent.com/45396214/114463102-d6710f00-9b98-11eb-8f79-73a7671c9c08.png)
# DNS_Server
A Local dns server that finds A and AAAA by listening to port and uses nslookup to find the value if not in cache
# usage 
run the server.c<br>
nslookup -type=aaaa -port=1234 nitc.ac.in 127.0.0.1
