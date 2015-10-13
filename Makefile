obj-m = hello.o
K_VERSION = $(uname -r)

all:
	make -C /lib/modules/$(K_VERSION)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(K_VERSION)/build M=$(PWD) clean
