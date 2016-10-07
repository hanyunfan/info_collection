# Info_Collection

<snippet>
  <content><![CDATA[
# ${1:Info_Collection}

This script is use to retrieve info from Windows/Liunx/VMWare ESXi, info.sh is the main script, which auto detects the OS.

## Prerequisities

esxcli is the command remotely retrive info from ESXi system, but it need to be installed on the host machine, download from https://my.vmware.com/web/vmware/details?downloadGroup=VCLI600&productId=491, and see the installation guide on https://pubs.vmware.com/vsphere-60/index.jsp?topic=%2Fcom.vmware.vcli.getstart.doc%2Fcli_install.4.5.html

wmic is the command remotely retrive info from windows system, you can copy it to the host with info.sh file and everything should be ok then. In case nessary, the source code was under windows folder, feel free to recompile it.
The login credential is critial under windows, make sure the login account has the rights for doing remote WMI calls. For testing the connectivity and better understanding of WMI, refer to:
1. http://www.solarwinds.com/documentation/apm/docs/wmitesting.pdf
2. http://www.ravichaganti.com/blog/uploads/downloads/2016/04/WMI_Query_Language_via_PowerShell_v2_0.pdf

On linux part, ssh service need to be enabled on the host machine and currently using port 22 to connect, this can be easiler updated if other ports needed.

## Installation

Download and run

## Usage

Usage ./info.sh ssh_ip_address ssh_user 'ssh_password' ipmi_ip ipmi_user 'ipmi_password'

## Running the tests

Use the linux-test-command.sh for testing Linux and win-test-command.sh, vmware-test-command.sh for Windows and VMWare.(modify the IP and login credentials)

### Break down into end to end tests

For example, modify the IP and login credentials for Linux

```
vim linux-test-command.sh
```

And then run

```
./linux-test-command.sh
```

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## Authors

* **Frank Han** - *Initial work* - [Info_Collection](https://github.com/hanyunfan/info_collection_Linux)

See also the list of [contributors](https://github.com/hanyunfan/info_collection_Linux/graphs/contributors) who participated in this project.

## License

This project is licensed under the GNU GPLv3 License - see the [LICENSE.md](LICENSE.md) file for details
]]></content>
  <tabTrigger>readme</tabTrigger>
</snippet>
