gpc $4, r0
gpc $10, r6
j (r6)
.long 0x2f62696e
.long 0x2f73680a
ld $7, r1
sys $2
halt
