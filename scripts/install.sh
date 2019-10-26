#!/bin/bash

cp wlx503eaa629e74 /usr/local/bin/
cp wpa_supplicant.conf /etc/wpa_supplicant.conf
cp usbwifi.service /etc/systemd/system/
chmod 644 /etc/systemd/system/usbwifi.service 
systemctl enable usbwifi.service 
systemctl start usbwifi.service 
systemctl status usbwifi.service 
