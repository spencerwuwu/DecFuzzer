import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;

data data(offset: memory_base) =
  "g_6\00g_13\00g_2\001\00g_20\00checksum = %X\0a\00...checksum after has"
  "hing %s : %X\0a\00\00\00\fe\ff\ff\ff6\a3\01\00\cd\ef\00\00\ff\ff\ff\ff"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "";

import function strcmp(a:int, b:int):int;

import function printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function func_1():int {
  var a:int = stack_pointer;
  var b:int = 48;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = -2;
  c[11]:int = d;
  var e:int = 41782;
  c[21]:short = e;
  var f:int = 1;
  c[20]:short = f;
  var g:int = 61389;
  c[19]:short = g;
  var h:int = 1843402829;
  c[8]:int = h;
  var i:int = 1707269496;
  c[7]:int = i;
  var j:int = -1;
  c[6]:int = j;
  var k:int = 1877736236;
  c[5]:int = k;
  var l:int = 0;
  c[4]:int = l;
  var m:int = 0;
  c[3]:int = m;
  var n:int = 0;
  c[11]:int = n;
  loop L_b {
    var o:int = c[11]:int;
    var p:int = 29;
    var q:int = o;
    var r:int = p;
    var s:int = q == r;
    var t:int = 1;
    var u:int = s & t;
    if (eqz(u)) goto B_a;
    var v:int = -527862602;
    c[2]:int = v;
    var w:int = c[11]:int;
    var x:int = c[2]:int;
    var y:int = w & x;
    c[21]:short = y;
    var z:int = 16;
    var aa:int = y << z;
    var ba:int = aa >> z;
    var ca:int = c[11]:int;
    var da:int = 65535;
    var ea:int = ca & da;
    var fa:int = c[11]:int;
    var ga:int = 65535;
    var ha:int = fa & ga;
    var ia:int = ea << ha;
    var ja:int = 65535;
    var ka:int = ia & ja;
    var la:int = c[11]:int;
    var ma:int = 65535;
    var na:int = la & ma;
    var oa:int = ka / na;
    var pa:int = 1275068689;
    var qa:int = oa + pa;
    var ra:int = ba;
    var sa:int = qa;
    var ta:int = ra != sa;
    var ua:int = 1;
    var va:int = ta & ua;
    c[20]:short = va;
    var wa:int = c[21]:ushort;
    var xa:int = 0;
    var ya:int = 65535;
    var za:int = wa & ya;
    var ab:int = 65535;
    var bb:int = xa & ab;
    var cb:int = za != bb;
    var db:int = 1;
    var eb:int = cb & db;
    if (eqz(eb)) goto B_d;
    goto B_c;
    label B_d:
    label B_c:
    var fb:int = c[11]:int;
    var gb:int = 1;
    var hb:int = fb + gb;
    c[11]:int = hb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ib:int = c[19]:ushort;
  var jb:int = 1;
  var kb:int = ib + jb;
  c[19]:short = kb;
  var lb:int = c[11]:int;
  var mb:int = c[21]:ushort;
  var nb:int = c[20]:ushort;
  var ob:int = c[19]:ushort;
  var pb:int = 16;
  var qb:int = mb << pb;
  var rb:int = qb >> pb;
  var sb:int = 16;
  var tb:int = nb << sb;
  var ub:int = tb >> sb;
  var vb:int = 65535;
  var wb:int = ob & vb;
  set_var(lb, rb, ub, wb);
  var xb:int = c[19]:ushort;
  var yb:int = 65535;
  var zb:int = xb & yb;
  var ac:int = 48;
  var bc:int = c + ac;
  stack_pointer = bc;
  return zb;
}

function set_var(a:int, b:int, c:int, d:int):int {
  var e:int = stack_pointer;
  var f:int = 16;
  var g:int = e - f;
  g[3]:int = a;
  g[5]:short = b;
  g[4]:short = c;
  g[3]:short = d;
  var h:int = g[3]:int;
  var i:int = 72;
  var j:int = memory_base;
  var k:int_ptr = j + i;
  k[0] = h;
  var l:int = g[5]:ushort;
  var m:int = 76;
  var n:short_ptr = j + m;
  n[0] = l;
  var o:int = g[4]:ushort;
  var p:int = 78;
  var q:short_ptr = j + p;
  q[0] = o;
  var r:int = g[3]:ushort;
  var s:int = 80;
  var t:short_ptr = j + s;
  t[0] = r;
  var u:int = 0;
  return u;
}

function main(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:int, b:int, c:int, d:int } = c - d;
  stack_pointer = e;
  var f:int = 0;
  e.d = f;
  e.c = a;
  e.b = b;
  var g:int = 0;
  e.a = g;
  var h:int = e.c;
  var i:int = 2;
  var j:int = h;
  var k:int = i;
  var l:int = j == k;
  var m:int = 1;
  var n:int = l & m;
  if (eqz(n)) goto B_a;
  var o:int_ptr = e.b;
  var p:int = o[1];
  var q:int = 13;
  var r:int = memory_base;
  var s:int = r + q;
  var t:int = strcmp(p, s);
  if (t) goto B_a;
  var u:int = 1;
  e.a = u;
  label B_a:
  platform_main_begin();
  crc32_gentab();
  func_1();
  var v:int = 72;
  var w:int = memory_base;
  var x:int_ptr = w + v;
  var y:int = x[0];
  var z:int = e.a;
  var aa:int = 9;
  var ba:int = w + aa;
  transparent_crc(y, ba, z);
  var ca:int = 76;
  var da:short_ptr = w + ca;
  var ea:int = da[0];
  var fa:int = e.a;
  var ga:int = 0;
  var ha:int = w + ga;
  transparent_crc(ea, ha, fa);
  var ia:int = 78;
  var ja:short_ptr = w + ia;
  var ka:int = ja[0];
  var la:int = e.a;
  var ma:int = 4;
  var na:int = w + ma;
  transparent_crc(ka, na, la);
  var oa:int = 80;
  var pa:ushort_ptr = w + oa;
  var qa:int = pa[0];
  var ra:int = e.a;
  var sa:int = 15;
  var ta:int = w + sa;
  transparent_crc(qa, ta, ra);
  var ua:int = 84;
  var va:int_ptr = w + ua;
  var wa:int = va[0];
  var xa:int = -1;
  var ya:int = wa ^ xa;
  var za:int = e.a;
  platform_main_end(ya, za);
  var ab:int = 0;
  var bb:int = 16;
  var cb:int = e + bb;
  stack_pointer = cb;
  return ab;
}

function platform_main_begin() {
}

function crc32_gentab() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:{ a:int, b:int, c:int, d:int } = a - b;
  var d:int = -306674912;
  c.c = d;
  var e:int = 0;
  c.b = e;
  loop L_b {
    var f:int = c.b;
    var g:int = 256;
    var h:int = f;
    var i:int = g;
    var j:int = h < i;
    var k:int = 1;
    var l:int = j & k;
    if (eqz(l)) goto B_a;
    var m:int = c.b;
    c.d = m;
    var n:int = 8;
    c.a = n;
    loop L_d {
      var o:int = c.a;
      var p:int = 0;
      var q:int = o;
      var r:int = p;
      var s:int = q > r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = c.d;
      var w:int = 1;
      var x:int = v & w;
      if (eqz(x)) goto B_f;
      var y:int = c.d;
      var z:int = 1;
      var aa:int = y >> z;
      var ba:int = -306674912;
      var ca:int = aa ^ ba;
      c.d = ca;
      goto B_e;
      label B_f:
      var da:int = c.d;
      var ea:int = 1;
      var fa:int = da >> ea;
      c.d = fa;
      label B_e:
      var ga:int = c.a;
      var ha:int = -1;
      var ia:int = ga + ha;
      c.a = ia;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ja:int = c.d;
    var ka:int = c.b;
    var la:int = 2;
    var ma:int = ka << la;
    var na:int = 96;
    var oa:int = memory_base;
    var pa:int = oa + na;
    var qa:int_ptr = pa + ma;
    qa[0] = ja;
    var ra:int = c.b;
    var sa:int = 1;
    var ta:int = ra + sa;
    c.b = ta;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function transparent_crc(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  stack_pointer = f;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[7];
  crc32_8bytes(g);
  var h:int = f[5];
  if (eqz(h)) goto B_a;
  var i:int = f[6];
  var j:int = 84;
  var k:int = memory_base;
  var l:int_ptr = k + j;
  var m:int = l[0];
  var n:int = -1;
  var o:int = m ^ n;
  f[1] = o;
  f[0] = i;
  var p:int = 35;
  var q:int = memory_base;
  var r:int = q + p;
  printf(r, f);
  label B_a:
  var s:int = 32;
  var t:int = f + s;
  stack_pointer = t;
}

function platform_main_end(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[3] = a;
  e[2] = b;
  var f:int = e[3];
  e[0] = f;
  var g:int = 20;
  var h:int = memory_base;
  var i:int = h + g;
  printf(i, e);
  var j:int = 16;
  var k:int = e + j;
  stack_pointer = k;
}

function crc32_8bytes(a:int) {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  stack_pointer = d;
  d[3] = a;
  var e:int = d[3];
  var f:int = 0;
  var g:int = e >> f;
  var h:int = 255;
  var i:int = g & h;
  var j:int = 255;
  var k:int = i & j;
  crc32_byte(k);
  var l:int = d[3];
  var m:int = 8;
  var n:int = l >> m;
  var o:int = 255;
  var p:int = n & o;
  var q:int = 255;
  var r:int = p & q;
  crc32_byte(r);
  var s:int = d[3];
  var t:int = 16;
  var u:int = s >> t;
  var v:int = 255;
  var w:int = u & v;
  var x:int = 255;
  var y:int = w & x;
  crc32_byte(y);
  var z:int = d[3];
  var aa:int = 24;
  var ba:int = z >> aa;
  var ca:int = 255;
  var da:int = ba & ca;
  var ea:int = 255;
  var fa:int = da & ea;
  crc32_byte(fa);
  var ga:int = 16;
  var ha:int = d + ga;
  stack_pointer = ha;
}

function crc32_byte(a:int) {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int = b - c;
  d[15]:byte = a;
  var e:int = 84;
  var f:int = memory_base;
  var g:int_ptr = f + e;
  var h:int = g[0];
  var i:int = 8;
  var j:int = h >> i;
  var k:int = d[15]:ubyte;
  var l:int = h ^ k;
  var m:int = 255;
  var n:int = l & m;
  var o:int = 96;
  var p:int = f + o;
  var q:int = 2;
  var r:int = n << q;
  var s:int_ptr = p + r;
  var t:int = s[0];
  var u:int = j ^ t;
  g[0] = u;
}

