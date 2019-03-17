# ubuntu18.04下安装Erlang和RabbitMQ
## 安装Erlang
1. [官网下载](https://www.erlang-solutions.com/resources/download.html)，不推荐apt-get的方式进行安装，因为版本较老。
2. 执行dpkg -i ‘安装包’ 来安装erlang（如缺少环境，按照提示进行安装）

## 安装RabbitMQ
1. [官网下载](http://www.rabbitmq.com/install-debian.html#downloads)，安装rabbitmq需要先安装erlang
2. 2. 执行dpkg -i ‘安装包’