# PasswordMaker
Merely password maker

option:<br>
  -a: use alphabet {abcdefghijklmnopqrstuvwxyz}.<br>
  -A: use ALPHABET {ABCDEFGHIJKLMNOPQRSTUVWXYZ}.<br>
  -0: use number {0123456789}.<br>
  -&#95;: use symbol {!&quot;#$%&amp;'()*+,-./:;&lt;=&gt;?@[]^&#95;&#39;{|}~}. <b>*'\' is not used*</b><br>
  -n number: set password length to number<br>
  default:use all charcters and length is 10.<br>
  
sample:<br>
C:\&gt;PasswordMaker<br>
,S[F?KWE5&gt;<br>

C:\&gt;PasswordMaker -n20<br>
hIGs''0WT|H~8N%3/Klr<br>

C:\&gt;PasswordMaker -a0 <br>
yjqd0ncogl<br>

C:\PasswordMaker -A0&#95;n 64<br>
U@*)=C?D5V&amp;lt;H8I9*~Q/!EUC|3?&quot;0^#5:QMCI9{TC.(ZM&amp;lt;QD(7?T|~0.&#95;?G770*U&#95;<br>
