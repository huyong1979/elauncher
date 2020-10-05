dbLoadDatabase "/epics/iocs/pure-elauncher/dbd/scriptlaunch.dbd"
scriptlaunch_registerRecordDeviceDriver pdbbase

# the following two lines are for conda/python3 and cothread
epicsEnvSet("PATH", "/opt/conda_envs/ap-2019-2.1/bin:/sbin:/bin:/usr/sbin:/usr/bin")
epicsEnvSet("EPICS_BASE", "/usr/lib/epics")
epicsEnvSet("EPICS_CA_AUTO_ADDR_LIST", "NO")
epicsEnvSet("EPICS_CA_ADDR_LIST", "10.0.153.255")

# verify Python version
system("python --version")

# Load record instances for CSS/reccaster, iocAdminSoft/Reboot
dbLoadRecords("$(EPICS_BASE)/db/reccaster.db", "P=OP-CT{IOC:$(IOCNAME)}RecSync")
dbLoadRecords("$(EPICS_BASE)/db/iocAdminSoft.db", "IOC=OP-CT{IOC:$(IOCNAME)}")
