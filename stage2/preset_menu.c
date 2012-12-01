const char *preset_menu =
    "rootnoverify (hd0,0)\n"
    "default=0\n"
    "timeout 0\n"
    "\n"
    "title AndroVM startup\n"
    "       cmdline (hd0,2)/cmdline\n"
    "       kernel --use-cmd-line (hd0,2)/kernel\n"
    "       initrd (hd0,2)/ramdisk\n";
