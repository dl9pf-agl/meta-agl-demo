# Guest machine for an x86-64 host. There is no virtio-x86-64 MACHINE, so use qemux86-64 for the guest as well
# (the same choice as meta-agl-xen makes in agl-xen-qemux86-64.inc).
AGL_GUEST_MACHINE = "qemux86-64"
