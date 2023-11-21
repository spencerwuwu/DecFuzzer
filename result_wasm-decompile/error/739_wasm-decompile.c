import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;

data data(offset: memory_base) =
  "g_5\00g_4\00g_3\00g_2\001\00checksum = %X\0a\00...checksum after hashi"
  "ng %s : %X\0a\00\8c\92a\8a88\f7\b0\fb\ff\ff\ff\ff\ff\ff\ff\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

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
  var d:int = -1973316980;
  c.d = d;
  var e:int = -1325975496;
  c.c = e;
  var f:int = 0;
  c.b = f;
  var g:int = -5;
  c.a = g;
  var h:int = 16;
  c.a = h;
  loop L_b {
    var i:int = c.a;
    var j:int = 16;
    var k:int = i;
    var l:int = j;
    var m:int = k != l;
    var n:int = 1;
    var o:int = m & n;
    if (eqz(o)) goto B_a;
    var p:int = c.b;
    var q:int = -2111105448;
    var r:int = p & q;
    c.b = r;
    var s:int = c.a;
    var t:int = 1;
    var u:int = s + t;
    c.a = u;
    continue L_b;
  }
  unreachable;
  label B_a:
  var v:int = c.d;
  var w:int = c.c;
  var x:int = c.b;
  var y:int = c.a;
  set_var(v, w, x, y);
  var z:int = c.d;
  var aa:int = 24;
  var ba:int = z << aa;
  var ca:int = ba >> aa;
  var da:int = 16;
  var ea:int = c + da;
  stack_pointer = ea;
  return ca;
}

function set_var(a:int, b:int, c:int, d:int):int {
  var e:int = stack_pointer;
  var f:int = 16;
  var g:{ a:int, b:int, c:int, d:int } = e - f;
  g.d = a;
  g.c = b;
  g.b = c;
  g.a = d;
  var h:int = g.d;
  var i:int = 68;
  var j:int = memory_base;
  var k:int_ptr = j + i;
  k[0] = h;
  var l:int = g.c;
  var m:int = 72;
  var n:int_ptr = j + m;
  n[0] = l;
  var o:int = g.b;
  var p:int = 96;
  var q:int_ptr = j + p;
  q[0] = o;
  var r:int = g.a;
  var s:int = 76;
  var t:int_ptr = j + s;
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
  var q:int = 16;
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
  var v:int = 68;
  var w:int = memory_base;
  var x:int_ptr = w + v;
  var y:int = x[0];
  var z:int = e.a;
  var aa:int = 12;
  var ba:int = w + aa;
  transparent_crc(y, ba, z);
  var ca:int = 72;
  var da:int_ptr = w + ca;
  var ea:int = da[0];
  var fa:int = e.a;
  var ga:int = 8;
  var ha:int = w + ga;
  transparent_crc(ea, ha, fa);
  var ia:int = 96;
  var ja:int_ptr = w + ia;
  var ka:int = ja[0];
  var la:int = e.a;
  var ma:int = 4;
  var na:int = w + ma;
  transparent_crc(ka, na, la);
  var oa:int = 76;
  var pa:int_ptr = w + oa;
  var qa:int = pa[0];
  var ra:int = e.a;
  var sa:int = 0;
  var ta:int = w + sa;
  transparent_crc(qa, ta, ra);
  var ua:int = 80;
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
    var na:int = 112;
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
  var j:int = 80;
  var k:int = memory_base;
  var l:int_ptr = k + j;
  var m:int = l[0];
  var n:int = -1;
  var o:int = m ^ n;
  f[1] = o;
  f[0] = i;
  var p:int = 33;
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
  var g:int = 18;
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
  var e:int = 80;
  var f:int = memory_base;
  var g:int_ptr = f + e;
  var h:int = g[0];
  var i:int = 8;
  var j:int = h >> i;
  var k:int = d[15]:ubyte;
  var l:int = h ^ k;
  var m:int = 255;
  var n:int = l & m;
  var o:int = 112;
  var p:int = f + o;
  var q:int = 2;
  var r:int = n << q;
  var s:int_ptr = p + r;
  var t:int = s[0];
  var u:int = j ^ t;
  g[0] = u;
}

