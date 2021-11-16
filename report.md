# CS121@2021fall Lab1 Report

## Testing Enviroment

## Test dataset

## Algorithm Description

## Appendix

### HW/SW Enviornment

The benchmark was done on my laptop.  
It is a Lenovo Ideapad S540 equiped with a AMD Ryzen 4800U processor (8 physical cores with hyperthreading feature enabled) and 16GB DDR4 memory (configured in 2x8 dual channel mode).  
Arch linux is installed on the machine, all the involved softwares are up-to-date (latest stable release).

```plaintext
uname -a

Linux sp-ideapad 5.15.2-arch1-1 #1 SMP PREEMPT Fri, 12 Nov 2021 19:22:10 +0000 x86_64 GNU/Linux
```

```plaintext
lscpu

Architecture:                    x86_64
CPU op-mode(s):                  32-bit, 64-bit
Address sizes:                   48 bits physical, 48 bits virtual
Byte Order:                      Little Endian
CPU(s):                          16
On-line CPU(s) list:             0-15
Vendor ID:                       AuthenticAMD
Model name:                      AMD Ryzen 7 4800U with Radeon Graphics
CPU family:                      23
Model:                           96
Thread(s) per core:              2
Core(s) per socket:              8
Socket(s):                       1
Stepping:                        1
Frequency boost:                 enabled
CPU max MHz:                     1800.0000
CPU min MHz:                     1400.0000
BogoMIPS:                        3594.00
Flags:                           fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush mmx fxsr sse sse2 ht syscall nx mmxext fxsr_opt pdpe1gb rdtscp lm constant_tsc rep_good nopl nonstop_tsc cpuid extd_apicid aperfmperf rapl pni pclmulqdq monitor ssse3 fma cx16 sse4_1 sse4_2 movbe popcnt aes xsave avx f16c rdrand lahf_lm cmp_legacy svm extapic cr8_legacy abm sse4a misalignsse 3dnowprefetch osvw ibs skinit wdt tce topoext perfctr_core perfctr_nb bpext perfctr_llc mwaitx cpb cat_l3 cdp_l3 hw_pstate ssbd mba ibrs ibpb stibp vmmcall fsgsbase bmi1 avx2 smep bmi2 cqm rdt_a rdseed adx smap clflushopt clwb sha_ni xsaveopt xsavec xgetbv1 xsaves cqm_llc cqm_occup_llc cqm_mbm_total cqm_mbm_local clzero irperf xsaveerptr rdpru wbnoinvd arat npt lbrv svm_lock nrip_save tsc_scale vmcb_clean flushbyasid decodeassists pausefilter pfthreshold avic v_vmsave_vmload vgif v_spec_ctrl umip rdpid overflow_recov succor smca
Virtualization:                  AMD-V
L1d cache:                       256 KiB (8 instances)
L1i cache:                       256 KiB (8 instances)
L2 cache:                        4 MiB (8 instances)
L3 cache:                        8 MiB (2 instances)
NUMA node(s):                    1
NUMA node0 CPU(s):               0-15
Vulnerability Itlb multihit:     Not affected
Vulnerability L1tf:              Not affected
Vulnerability Mds:               Not affected
Vulnerability Meltdown:          Not affected
Vulnerability Spec store bypass: Mitigation; Speculative Store Bypass disabled via prctl and seccomp
Vulnerability Spectre v1:        Mitigation; usercopy/swapgs barriers and __user pointer sanitization
Vulnerability Spectre v2:        Mitigation; Full AMD retpoline, IBPB conditional, IBRS_FW, STIBP conditional, RSB filling
Vulnerability Srbds:             Not affected
Vulnerability Tsx async abort:   Not affected
```

```plaintext
hwinfo --cpu

01: None 00.0: 10103 CPU
  [Created at cpu.462]
  Unique ID: rdCR.j8NaKXDZtZ6
  Hardware Class: cpu
  Arch: X86-64
  Vendor: "AuthenticAMD"
  Model: 23.96.1 "AMD Ryzen 7 4800U with Radeon Graphics"
  Features: fpu,vme,de,pse,tsc,msr,pae,mce,cx8,apic,sep,mtrr,pge,mca,cmov,pat,pse36,clflush,mmx,fxsr,sse,sse2,ht,syscall,nx,mmxext,fxsr_opt,pdpe1gb,rdtscp,lm,constant_tsc,rep_good,nopl,nonstop_tsc,cpuid,extd_apicid,aperfmperf,rapl,pni,pclmulqdq,monitor,ssse3,fma,cx16,sse4_1,sse4_2,movbe,popcnt,aes,xsave,avx,f16c,rdrand,lahf_lm,cmp_legacy,svm,extapic,cr8_legacy,abm,sse4a,misalignsse,3dnowprefetch,osvw,ibs,skinit,wdt,tce,topoext,perfctr_core,perfctr_nb,bpext,perfctr_llc,mwaitx,cpb,cat_l3,cdp_l3,hw_pstate,ssbd,mba,ibrs,ibpb,stibp,vmmcall,fsgsbase,bmi1,avx2,smep,bmi2,cqm,rdt_a,rdseed,adx,smap,clflushopt,clwb,sha_ni,xsaveopt,xsavec,xgetbv1,xsaves,cqm_llc,cqm_occup_llc,cqm_mbm_total,cqm_mbm_local,clzero,irperf,xsaveerptr,rdpru,wbnoinvd,arat,npt,lbrv,svm_lock,nrip_save,tsc_scale,vmcb_clean,flushbyasid,decodeassists,pausefilter,pfthreshold,avic,v_vmsave_vmload,vgif,v_spec_ctrl,umip,rdpid,overflow_recov,succor,smca
  Clock: 2405 MHz
  BogoMips: 3594.00
  Cache: 512 kb
  Units/Processor: 16
  Config Status: cfg=new, avail=yes, need=no, active=unknown


(15 duplicate ones omitted)
```

```plaintext
hwinfo --memory

01: None 00.0: 10102 Main Memory
  [Created at memory.74]
  Unique ID: rdCR.CxwsZFjVASF
  Hardware Class: memory
  Model: "Main Memory"
  Memory Range: 0x00000000-0x3a4620fff (rw)
  Memory Size: 15 GB
  Config Status: cfg=new, avail=yes, need=no, active=unknown
```

```plaintext
gcc --version

gcc (GCC) 11.1.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.
There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


pacman -Qi gcc

Name            : gcc
Version         : 11.1.0-1
Description     : The GNU Compiler Collection - C and C++ frontends
Architecture    : x86_64
URL             : https://gcc.gnu.org
Licenses        : GPL  LGPL  FDL  custom
Groups          : base-devel
Provides        : gcc-multilib
Depends On      : gcc-libs=11.1.0-1  binutils>=2.28  libmpc
Optional Deps   : lib32-gcc-libs: for generating code for 32-bit ABI
Required By     : clang  dkms  ghc
Optional For    : xorg-xrdb
Conflicts With  : None
Replaces        : gcc-multilib
Installed Size  : 151.27 MiB
Packager        : Giancarlo Razzolini <grazzolini@archlinux.org>
Build Date      : Thu 13 May 2021 10:02:30 PM CST
Install Date    : Mon 17 May 2021 10:11:15 PM CST
Install Reason  : Explicitly installed
Install Script  : No
Validated By    : Signature
```

```plaintext
pacman -Qi openmp

Name            : openmp
Version         : 13.0.0-1
Description     : LLVM OpenMP Runtime Library
Architecture    : x86_64
URL             : https://openmp.llvm.org/
Licenses        : custom:Apache 2.0 with LLVM Exception
Groups          : None
Provides        : None
Depends On      : glibc  libelf  libffi
Optional Deps   : None
Required By     : None
Optional For    : clang
Conflicts With  : None
Replaces        : None
Installed Size  : 23.40 MiB
Packager        : Evangelos Foutras <foutrelis@archlinux.org>
Build Date      : Sun 24 Oct 2021 02:56:37 AM CST
Install Date    : Sat 13 Nov 2021 09:32:10 PM CST
Install Reason  : Explicitly installed
Install Script  : No
Validated By    : Signature
```

```plaintext
cmake --version

cmake version 3.21.4


pacman -Qi cmake

Name            : cmake
Version         : 3.21.4-1
Description     : A cross-platform open-source make system
Architecture    : x86_64
URL             : https://www.cmake.org/
Licenses        : custom
Groups          : None
Provides        : None
Depends On      : curl  libarchive  hicolor-icon-theme  jsoncpp  libjsoncpp.so=24-64  libuv  rhash
Optional Deps   : qt6-base: cmake-gui [installed]
Required By     : None
Optional For    : qtcreator
Conflicts With  : None
Replaces        : None
Installed Size  : 49.66 MiB
Packager        : Antonio Rojas <arojas@archlinux.org>
Build Date      : Thu 28 Oct 2021 01:53:07 AM CST
Install Date    : Thu 28 Oct 2021 11:50:36 PM CST
Install Reason  : Explicitly installed
Install Script  : No
Validated By    : Signature
```

```plaintext
valgrind --version

valgrind-3.17.0


pacman -Qi valgrind

Name            : valgrind
Version         : 3.17.0-1
Description     : Tool to help find memory-management problems in programs
Architecture    : x86_64
URL             : http://valgrind.org/
Licenses        : GPL
Groups          : None
Provides        : valgrind-multilib
Depends On      : glibc  perl
Optional Deps   : lib32-glibc: 32-bit ABI support
Required By     : None
Optional For    : qtcreator
Conflicts With  : None
Replaces        : valgrind-multilib
Installed Size  : 274.88 MiB
Packager        : Allan McRae <allan@archlinux.org>
Build Date      : Thu 20 May 2021 03:14:41 PM CST
Install Date    : Sun 30 May 2021 07:44:19 PM CST
Install Reason  : Explicitly installed
Install Script  : No
Validated By    : Signature
```