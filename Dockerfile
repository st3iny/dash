FROM docker.io/debian:buster-slim

RUN apt update && apt install -y openssl

COPY ./src/dash /usr/local/bin/dash
COPY ./libspawn_server_testing.so /lib/x86_64-linux-gnu/

ENTRYPOINT ["/usr/local/bin/dash"]
