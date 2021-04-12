# DNS_Server
A Local dns server that finds A and AAAA by listening to port and uses nslookup to find the value if not in cache
# usage 
run the server.c<br>
nslookup -type=aaaa -port=1234 nitc.ac.in 127.0.0.1
