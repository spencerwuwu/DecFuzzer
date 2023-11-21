import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;

data data(offset: memory_base) =
  "g_6\00g_5\00g_4\001\00checksum = %X\0a\00...checksum after hashing %s "
  ": %X\0a\00\02\00\00\00\81GW\c1\ff\ff\ff\ff\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00";

import function strcmp(a:int, b:int):int;

import function printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function func_1():int {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:{ a:int, b:int, c:int, d:int } = a - b;
  stack_pointer = c;
  var d:int = 2;
  c.d = d;
  var e:int = 775018546;
  c.c = e;
  var f:int = -1051244671;
  c.b = f;
  var g:int = 1902055121;
  c.a = g;
  var h:int = c.d;
  var i:int = 775018546;
  var j:int = h;
  var k:int = i;
  var l:int = j > k;
  var m:int = 1;
  var n:int = l & m;
  var o:int = 24;
  var p:int = n << o;
  var q:int = p >> o;
  var r:int = 3;
  var s:int = q << r;
  c.b = s;
  c.a = s;
  var t:int = c.d;
  var u:int = c.b;
  set_var(t, u);
  var v:int = 775018546;
  var w:int = 16;
  var x:int = c + w;
  stack_pointer = x;
  return v;
}

function set_var(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = e[3];
  var g:int = 64;
  var h:int = memory_base;
  var i:int_ptr = h + g;
  i[0] = f;
  var j:int = e[2];
  var k:int = 68;
  var l:int_ptr = h + k;
  l[0] = j;
  var m:int = 0;
  return m;
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
  var q:int = 12;
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
  var v:int = 64;
  var w:int = memory_base;
  var x:int_ptr = w + v;
  var y:int = x[0];
  var z:int = e.a;
  var aa:int = 8;
  var ba:int = w + aa;
  transparent_crc(y, ba, z);
  var ca:int = e.a;
  var da:int = 4;
  var ea:int = w + da;
  var fa:int = 775018546;
  transparent_crc(fa, ea, ca);
  var ga:int = 68;
  var ha:int_ptr = w + ga;
  var ia:int = ha[0];
  var ja:int = e.a;
  var ka:int = 0;
  var la:int = w + ka;
  transparent_crc(ia, la, ja);
  var ma:int = 72;
  var na:int_ptr = w + ma;
  var oa:int = na[0];
  var pa:int = -1;
  var qa:int = oa ^ pa;
  var ra:int = e.a;
  platform_main_end(qa, ra);
  var sa:int = 0;
  var ta:int = 16;
  var ua:int = e + ta;
  stack_pointer = ua;
  return sa;
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
    var na:int = 80;
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
  var j:int = 72;
  var k:int = memory_base;
  var l:int_ptr = k + j;
  var m:int = l[0];
  var n:int = -1;
  var o:int = m ^ n;
  f[1] = o;
  f[0] = i;
  var p:int = 29;
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
  var g:int = 14;
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
  var e:int = 72;
  var f:int = memory_base;
  var g:int_ptr = f + e;
  var h:int = g[0];
  var i:int = 8;
  var j:int = h >> i;
  var k:int = d[15]:ubyte;
  var l:int = h ^ k;
  var m:int = 255;
  var n:int = l & m;
  var o:int = 80;
  var p:int = f + o;
  var q:int = 2;
  var r:int = n << q;
  var s:int_ptr = p + r;
  var t:int = s[0];
  var u:int = j ^ t;
  g[0] = u;
}

