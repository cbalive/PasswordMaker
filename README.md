# PasswordMaker
Merely password maker

option:
  -a: use alphabet {abcdefghijklmnopqrstuvwxyz}.
  -A: use ALPHABET {ABCDEFGHIJKLMNOPQRSTUVWXYZ}.
  -0: use number {0123456789}.
  -_: use symbol {!"#$%&'()*+,-./:;<=>?@[]^_`{|}~}. <b>'\' is not used</b>
  -n number: set password length to number
  default:use all charcters and length is 10.
  
sample:
C:\>PasswordMaker
,S[F?KWE5>

C:\>PasswordMaker -n20
hIGs''0WT|H~8N%3/Klr

C:\>PasswordMaker -a0 
yjqd0ncogl

C:\PasswordMaker -A0_n 64
U@*)=C?D5V<H8I9*~Q/!EUC|3?"0^#5:QMCI9{TC.(ZM<QD(7?T|~0._?G770*U_

