cmd_net/bluetooth/bluetooth.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/david/Projects/blueocean-os/3.17.CUBIETRUCK/linux-sunxi-3.4/scripts/module-common.lds --build-id  -o net/bluetooth/bluetooth.ko net/bluetooth/bluetooth.o net/bluetooth/bluetooth.mod.o
