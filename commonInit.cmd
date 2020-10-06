# Access security control 
asSetFilename("/cf-update/acf/default.acf")

# IOC initialization
iocInit()

# Log when, where and who changed PV values
caPutLogInit("ioclog.cs.nsls2.local:7004", 1)

# dump PVs to a file
dbl > /cf-update/$(HOSTNAME).$(IOCNAME).dbl
