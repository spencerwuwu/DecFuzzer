import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;

data data(offset: memory_base) =
  "g_6\00g_4\001\00checksum = %X\0a\00...checksum after hashing %s : %X\0a"
  "\00\d4/\b7\e8\ff\ff\ff\ff\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00";

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
  var d:int = -390647852;
  c.d = d;
  var e:int = 0;
  c.c = e;
  var f:int = -7;
  c.b = f;
  var g:int = -305703589;
  c.a = g;
  var h:int = c.d;
  var i:int = c.a;
  var j:int = i | h;
  c.a = j;
  var k:int = c.d;
  var l:int = c.b;
  var m:int = k;
  var n:int = l;
  var o:int = m > n;
  var p:int = 1;
  var q:int = o & p;
  var r:int = c.d;
  var s:int = q;
  var t:int = r;
  var u:int = s != t;
  var v:int = 1;
  var w:int = u & v;
  var x:int = 0;
  var y:int = w;
  var z:int = x;
  var aa:int = y > z;
  var ba:int = 1;
  var ca:int = aa & ba;
  var da:int = c.d;
  var ea:int = ca;
  var fa:int = da;
  var ga:int = ea < fa;
  var ha:int = 1;
  var ia:int = 1;
  var ja:int = ga & ia;
  var ka:int = ha;
  if (ja) goto B_a;
  var la:int = 1;
  ka = la;
  label B_a:
  var ma:int = ka;
  var na:int = 1;
  var oa:int = ma & na;
  var pa:int = c.d;
  var qa:int = oa;
  var ra:int = pa;
  var sa:int = qa > ra;
  var ta:int = 1;
  var ua:int = sa & ta;
  c.c = ua;
  var va:int = c.d;
  var wa:int = c.c;
  set_var(va, wa);
  var xa:int = c.c;
  var ya:int = 16;
  var za:int = c + ya;
  stack_pointer = za;
  return xa;
}

function set_var(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = e[3];
  var g:int = 60;
  var h:int = memory_base;
  var i:int_ptr = h + g;
  i[0] = f;
  var j:int = e[2];
  var k:int = 80;
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
  var q:int = 8;
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
  var v:int = 60;
  var w:int = memory_base;
  var x:int_ptr = w + v;
  var y:int = x[0];
  var z:int = e.a;
  var aa:int = 4;
  var ba:int = w + aa;
  transparent_crc(y, ba, z);
  var ca:int = 80;
  var da:int_ptr = w + ca;
  var ea:int = da[0];
  var fa:int = e.a;
  var ga:int = 0;
  var ha:int = w + ga;
  transparent_crc(ea, ha, fa);
  var ia:int = 64;
  var ja:int_ptr = w + ia;
  var ka:int = ja[0];
  var la:int = -1;
  var ma:int = ka ^ la;
  var na:int = e.a;
  platform_main_end(ma, na);
  var oa:int = 0;
  var pa:int = 16;
  var qa:int = e + pa;
  stack_pointer = qa;
  return oa;
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
  var j:int = 64;
  var k:int = memory_base;
  var l:int_ptr = k + j;
  var m:int = l[0];
  var n:int = -1;
  var o:int = m ^ n;
  f[1] = o;
  f[0] = i;
  var p:int = 25;
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
  var g:int = 10;
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
  var e:int = 64;
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

