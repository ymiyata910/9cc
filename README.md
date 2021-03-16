# 9cc

## Text
- [低レイヤを知りたい人のためのCコンパイラ作成入門](https://www.sigbus.info/compilerbook)


## Command

### Start docker image
```sh
$ docker-compose up -d --build
```


### Build docker image multi platform (For Apple Silicon Mac)
- Create buildx instance (Only once)
  ```sh
  $ docker buildx create --name {builder name} --use
  ```

- Bootstrap instance
  ```sh
  $ docker buildx inspect --bootstrap
  ```

- Check instance
  ```sh
  $ docker buildx ls
  ```

- Docker login
  ```sh
  $ docker login
  ```

- Build & Push
  ```sh
  $ docker buildx build --platform linux/amd64,linux/arm64 -t {image tag} --push .
  ```
