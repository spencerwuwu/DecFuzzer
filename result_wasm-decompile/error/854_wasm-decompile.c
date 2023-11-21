import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;

data data(offset: memory_base) =
  "g_169\00g_149\00g_129\00g_219\00g_98\00g_288\00g_148\00g_308\00g_57\00"
  "g_147\00g_27\00g_286\00g_186\00g_176\00g_56\00g_156\00g_226\00g_106\00"
  "g_185\00g_35\00g_225\00g_15\00g_105\00g_284\00g_64\00g_224\00g_14\00g_"
  "183\00g_13\00g_222\00g_12\00g_181\00g_221\00g_80\00g_180\00g_150\00che"
  "cksum = %X\0a\00...checksum after hashing %s : %X\0a\00\00\01\00\00\00"
  "\ff\ff\01\00\f8\ff\ff\ff9|\00\00\80\c9[P\e8\98\9dV\ff\ff\ff\ff\fb\ff\ff"
  "\ff\0dt\05Ug\df\00\00\8c\b8\80\\98w\00\00g\80Ex(\93)-\06\00\00\00\05\00"
  "\00\00\04\00\07\00\b8\00\00\00\09\00\00\00\01\00\00\00\14\b8\e3\ca\b8\b3"
  "\fa\00\01\00\00\00\06\00\00\00\fa\ff\ff\ff\ff\01\d9\00\ff\ff\ff\ff\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00";

import function strcmp(a:int, b:int):int;

import function printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function func_1():int {
  var nha:int;
  var a:int = stack_pointer;
  var b:int = 368;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 1;
  c[90]:int = d;
  var e:int = 65535;
  c[179]:short = e;
  var f:int = 1;
  c[357]:byte = f;
  var g:int = -8;
  c[88]:int = g;
  var h:int = 31801;
  c[175]:short = h;
  var i:int = 1348192640;
  c[86]:int = i;
  var j:int = 1453168872;
  c[85]:int = j;
  var k:int = -1;
  c[84]:int = k;
  var l:int = -5;
  c[83]:int = l;
  var m:int = 29709;
  c[165]:short = m;
  var n:int = 5;
  c[329]:byte = n;
  var o:int = 85;
  c[328]:byte = o;
  var p:int = 57191;
  c[163]:short = p;
  var q:int = 1551939724;
  c[80]:int = q;
  var r:int = 30616;
  c[159]:short = r;
  var s:int = 2017820775;
  c[78]:int = s;
  var t:int = 757699368;
  c[77]:int = t;
  var u:int = 6;
  c[76]:int = u;
  var v:int = 5;
  c[75]:int = v;
  var w:int = 4;
  c[299]:byte = w;
  var x:int = 7;
  c[148]:short = x;
  var y:int = 184;
  c[295]:byte = y;
  var z:int = 9;
  c[72]:int = z;
  var aa:int = 1;
  c[71]:int = aa;
  var ba:int = 47124;
  c[141]:short = ba;
  var ca:int = 51939;
  c[140]:short = ca;
  var da:int = 184;
  c[279]:byte = da;
  var ea:int = 179;
  c[278]:byte = ea;
  var fa:int = 250;
  c[277]:byte = fa;
  var ga:int = 1;
  c[68]:int = ga;
  var ha:int = 6;
  c[67]:int = ha;
  var ia:int = -6;
  c[66]:int = ia;
  var ja:int = 255;
  c[263]:byte = ja;
  var ka:int = 1;
  c[262]:byte = ka;
  var la:int = 217;
  c[261]:byte = la;
  var ma:int = 0;
  c[64]:int = ma;
  var na:int = 6;
  c[63]:int = na;
  var oa:int = 378701460;
  c[62]:int = oa;
  var pa:int = 0;
  c[61]:int = pa;
  var qa:int = 0;
  c[60]:int = qa;
  var ra:int = 1300277650;
  c[59]:int = ra;
  var sa:int = 121;
  c[235]:byte = sa;
  var ta:int = 0;
  c[57]:int = ta;
  var ua:int = -837418043;
  c[56]:int = ua;
  var va:int = 1193657783;
  c[55]:int = va;
  var wa:int = 65534;
  c[109]:short = wa;
  var xa:int = c[90]:int;
  var ya:int = 65535;
  var za:int = xa & ya;
  var ab:int = 6;
  var bb:int = ab - za;
  var cb:int = 16;
  var db:int = bb << cb;
  var eb:int = db >> cb;
  var fb:int = 6;
  var gb:int = eb + fb;
  var hb:int = c[179]:ushort;
  var ib:int = 16;
  var jb:int = hb << ib;
  var kb:int = jb >> ib;
  var lb:int = gb | kb;
  var mb:int = 24;
  var nb:int = lb << mb;
  var ob:int = nb >> mb;
  var pb:int = 72;
  var qb:int = ob * pb;
  var rb:int = c[357]:ubyte;
  var sb:int = 255;
  var tb:int = rb & sb;
  var ub:int = tb & qb;
  c[357]:byte = ub;
  var vb:int = 255;
  var wb:int = ub & vb;
  var xb:int = c[179]:ushort;
  var yb:int = 16;
  var zb:int = xb << yb;
  var ac:int = zb >> yb;
  var bc:int = wb;
  var cc:int = ac;
  var dc:int = bc > cc;
  var ec:int = 1;
  var fc:int = dc & ec;
  var gc:int = 51791;
  var hc:int = gc;
  var ic:int = fc;
  var jc:int = hc <= ic;
  var kc:int = 1;
  var lc:int = jc & kc;
  var mc:int = -1;
  var nc:int = lc ^ mc;
  var oc:int = c[88]:int;
  var pc:int = oc | nc;
  c[88]:int = pc;
  var qc:int = -20;
  c[88]:int = qc;
  loop L_c {
    var rc:int = c[88]:int;
    var sc:int = -14;
    var tc:int = rc;
    var uc:int = sc;
    var vc:int = tc >= uc;
    var wc:int = 1;
    var xc:int = vc & wc;
    if (eqz(xc)) goto B_b;
    var yc:int = 2;
    c[53]:int = yc;
    var zc:int = -1110591576;
    c[52]:int = zc;
    var ad:int = -1;
    c[51]:int = ad;
    var bd:int = 1;
    c[203]:byte = bd;
    var cd:int = -1;
    c[49]:int = cd;
    var dd:int = 0;
    c[357]:byte = dd;
    var ed:int = c[357]:ubyte;
    var fd:int = 255;
    var gd:int = ed & fd;
    var hd:int = 48;
    var id:int = gd;
    var jd:int = hd;
    var kd:int = id != jd;
    var ld:int = 1;
    var md:int = kd & ld;
    if (eqz(md)) goto B_d
    label B_d:
    var nd:int = c[53]:int;
    var od:int = 24;
    var pd:int = nd << od;
    var qd:int = pd >> od;
    var rd:int = c[179]:ushort;
    var sd:int = 24;
    var td:int = rd << sd;
    var ud:int = td >> sd;
    var vd:int = qd * ud;
    var wd:int = c[357]:ubyte;
    var xd:int = 255;
    var yd:int = wd & xd;
    var zd:int = vd ^ yd;
    var ae:int = 6;
    var be:int = zd | ae;
    var ce:int = 2;
    var de:int = be ^ ce;
    var ee:int = 1;
    var fe:int = ee;
    if (de) goto B_e;
    var ge:int = c[357]:ubyte;
    var he:int = 255;
    var ie:int = ge & he;
    var je:int = 0;
    var ke:int = ie;
    var le:int = je;
    var me:int = ke != le;
    fe = me;
    label B_e:
    var ne:int = fe;
    var oe:int = 1;
    var pe:int = ne & oe;
    var qe:int = 65535;
    var re:int = pe & qe;
    var se:int = 6;
    var te:int = se % re;
    c[175]:short = te;
    var ue:int = 0;
    var ve:int = 65535;
    var we:int = te & ve;
    var xe:int = 65535;
    var ye:int = ue & xe;
    var ze:int = we != ye;
    var af:int = 1;
    var bf:int = ze & af;
    if (eqz(bf)) goto B_h;
    var cf:int = 1;
    c[195]:byte = cf;
    var df:int = -423978604;
    c[47]:int = df;
    var ef:int = c[88]:int;
    var ff:int = c[175]:ushort;
    var gf:int = 65535;
    var hf:int = ff & gf;
    var if:int = ef - hf;
    var jf:int = c[53]:int;
    var kf:int = 1;
    var lf:int = kf;
    if (jf) goto B_i;
    var mf:int = c[53]:int;
    var nf:int = 0;
    var of:int = mf;
    var pf:int = nf;
    var qf:int = of != pf;
    lf = qf;
    label B_i:
    var rf:int = lf;
    var sf:int = 1;
    var tf:int = rf & sf;
    var uf:int = 378701460;
    var vf:int = tf;
    var wf:int = uf;
    var xf:int = vf <= wf;
    var yf:int = 1;
    var zf:int = xf & yf;
    var ag:int = 65535;
    var bg:int = zf & ag;
    var cg:int = 39177;
    var dg:int = bg - cg;
    var eg:int = 1509183963;
    var fg:int = eg;
    var gg:int = dg;
    var hg:int = fg > gg;
    var ig:int = 1;
    var jg:int = hg & ig;
    var kg:int = c[53]:int;
    var lg:int = jg;
    var mg:int = kg;
    var ng:int = lg == mg;
    var og:int = 1;
    var pg:int = ng & og;
    var qg:int = 152;
    var rg:int = pg | qg;
    var sg:int = if + rg;
    if (eqz(sg)) goto B_k;
    var tg:int = 718413272;
    c[46]:int = tg;
    var ug:int = -1;
    c[86]:int = ug;
    var vg:int = c[195]:ubyte;
    var wg:int = 0;
    var xg:int = 255;
    var yg:int = vg & xg;
    var zg:int = 255;
    var ah:int = wg & zg;
    var bh:int = yg != ah;
    var ch:int = 1;
    var dh:int = bh & ch;
    if (eqz(dh)) goto B_l;
    goto B_f;
    label B_l:
    var eh:int = c[46]:int;
    var fh:int = 1;
    var gh:int = fh;
    if (eh) goto B_m;
    var hh:int = 34452;
    c[175]:short = hh;
    var ih:int = c[88]:int;
    var jh:int = 378701460;
    var kh:int = ih & jh;
    var lh:int = 1359686986;
    var mh:int = lh;
    var nh:int = kh;
    var oh:int = mh > nh;
    var ph:int = 1;
    var qh:int = oh & ph;
    var rh:int = 16;
    var sh:int = qh << rh;
    var th:int = sh >> rh;
    var uh:int = c[90]:int;
    var vh:int = 16;
    var wh:int = uh << vh;
    var xh:int = wh >> vh;
    var yh:int = th / xh;
    var zh:int = 255;
    var ai:int = yh;
    var bi:int = zh;
    var ci:int = ai > bi;
    var di:int = 1;
    var ei:int = ci & di;
    var fi:int = c[46]:int;
    var gi:int = ei;
    var hi:int = fi;
    var ii:int = gi != hi;
    var ji:int = 1;
    var ki:int = ii & ji;
    var li:int = 24;
    var mi:int = ki << li;
    var ni:int = mi >> li;
    var oi:int = c[86]:int;
    var pi:int = 24;
    var qi:int = oi << pi;
    var ri:int = qi >> pi;
    var si:int = ni >> ri;
    var ti:int = 24;
    var ui:int = si << ti;
    var vi:int = ui >> ti;
    var wi:int = 6;
    var xi:int = vi >> wi;
    var yi:int = 92;
    var zi:int = xi;
    var aj:int = yi;
    var bj:int = zi <= aj;
    var cj:int = 1;
    var dj:int = bj & cj;
    var ej:int = 16;
    var fj:int = dj << ej;
    var gj:int = fj >> ej;
    var hj:int = 30811;
    var ij:int = gj * hj;
    var jj:int = c[88]:int;
    var kj:int = ij + jj;
    var lj:int = c[88]:int;
    var mj:int = kj;
    var nj:int = lj;
    var oj:int = mj == nj;
    var pj:int = 1;
    var qj:int = oj & pj;
    var rj:int = c[88]:int;
    var sj:int = qj | rj;
    var tj:int = 34452;
    var uj:int = sj ^ tj;
    var vj:int = 0;
    var wj:int = uj;
    var xj:int = vj;
    var yj:int = wj != xj;
    gh = yj;
    label B_m:
    gh;
    var zj:int = c[47]:int;
    var ak:int = 0;
    var bk:int = zj & ak;
    c[47]:int = bk;
    var ck:int = c[84]:int;
    var dk:int = -1;
    var ek:int = ck + dk;
    c[84]:int = ek;
    goto B_j;
    label B_k:
    var fk:int = 54029127;
    c[45]:int = fk;
    var gk:int = -1;
    c[44]:int = gk;
    var hk:int = c[195]:ubyte;
    var ik:int = 0;
    var jk:int = 255;
    var kk:int = hk & jk;
    var lk:int = 255;
    var mk:int = ik & lk;
    var nk:int = kk != mk;
    var ok:int = 1;
    var pk:int = nk & ok;
    if (eqz(pk)) goto B_n;
    goto B_b;
    label B_n:
    var qk:int = 0;
    c[53]:int = qk;
    loop L_p {
      var rk:int = c[53]:int;
      var sk:int = 48;
      var tk:int = rk;
      var uk:int = sk;
      var vk:int = tk != uk;
      var wk:int = 1;
      var xk:int = vk & wk;
      if (eqz(xk)) goto B_o;
      var yk:int = 65531;
      c[87]:short = yk;
      var zk:int = 250;
      c[195]:byte = zk;
      loop L_r {
        var al:int = c[195]:ubyte;
        var bl:int = 24;
        var cl:int = al << bl;
        var dl:int = cl >> bl;
        var el:int = -14;
        var fl:int = dl;
        var gl:int = el;
        var hl:int = fl != gl;
        var il:int = 1;
        var jl:int = hl & il;
        if (eqz(jl)) goto B_q;
        var kl:int = c[86]:int;
        c[83]:int = kl;
        var ll:int = c[52]:int;
        var ml:int = 0;
        var nl:int = ll ^ ml;
        c[52]:int = nl;
        var ol:int = c[90]:int;
        var pl:int = c[60]:int;
        var ql:int = pl | ol;
        c[60]:int = ql;
        var rl:int = -1;
        c[52]:int = rl;
        var sl:int = c[195]:ubyte;
        var tl:int = 24;
        var ul:int = sl << tl;
        var vl:int = ul >> tl;
        var wl:int = 1;
        var xl:int = vl - wl;
        c[195]:byte = xl;
        continue L_r;
      }
      unreachable;
      label B_q:
      var yl:int = c[53]:int;
      var zl:int = c[175]:ushort;
      var am:int = 65535;
      var bm:int = zl & am;
      var cm:int = 53860;
      var dm:int = bm | cm;
      c[175]:short = dm;
      var em:int = 65535;
      var fm:int = dm & em;
      var gm:int = c[83]:int;
      var hm:int = c[45]:int;
      var im:int = 65535;
      var jm:int = hm & im;
      var km:int = 56820;
      var lm:int = km % jm;
      var mm:int = 0;
      var nm:int = mm;
      if (eqz(lm)) goto B_s;
      var om:int = c[357]:ubyte;
      var pm:int = 255;
      var qm:int = om & pm;
      var rm:int = 0;
      var sm:int = qm;
      var tm:int = rm;
      var um:int = sm != tm;
      nm = um;
      label B_s:
      var vm:int = nm;
      var wm:int = 1;
      var xm:int = vm & wm;
      var ym:int = c[45]:int;
      var zm:int = xm & ym;
      var an:int = 16;
      var bn:int = zm << an;
      var cn:int = bn >> an;
      var dn:int = c[357]:ubyte;
      var en:int = 255;
      var fn:int = dn & en;
      var gn:int = 16;
      var hn:int = fn << gn;
      var in:int = hn >> gn;
      var jn:int = cn << in;
      var kn:int = 65535;
      var ln:int = jn & kn;
      var mn:int = 27008;
      var nn:int = ln - mn;
      var on:int = c[86]:int;
      var pn:int = nn % on;
      var qn:int = c[83]:int;
      var rn:int = pn;
      var sn:int = qn;
      var tn:int = rn > sn;
      var un:int = 1;
      var vn:int = tn & un;
      var wn:int = 8;
      var xn:int = vn;
      var yn:int = wn;
      var zn:int = xn >= yn;
      var ao:int = 1;
      var bo:int = zn & ao;
      var co:int = 59138;
      var do:int = bo;
      var eo:int = co;
      var fo:int = do > eo;
      var go:int = 1;
      var ho:int = fo & go;
      var io:int = gm | ho;
      var jo:int = c[179]:ushort;
      var ko:int = 16;
      var lo:int = jo << ko;
      var mo:int = lo >> ko;
      var no:int = mo ^ io;
      c[179]:short = no;
      var oo:int = 65535;
      var po:int = no & oo;
      var qo:int = fm - po;
      var ro:int = yl | qo;
      var so:int = 16;
      var to:int = ro << so;
      var uo:int = to >> so;
      var vo:int = c[86]:int;
      var wo:int = 16;
      var xo:int = vo << wo;
      var yo:int = xo >> wo;
      var zo:int = uo / yo;
      c[47]:int = zo;
      var ap:int = c[195]:ubyte;
      var bp:int = 0;
      var cp:int = 255;
      var dp:int = ap & cp;
      var ep:int = 255;
      var fp:int = bp & ep;
      var gp:int = dp != fp;
      var hp:int = 1;
      var ip:int = gp & hp;
      if (eqz(ip)) goto B_u;
      goto B_t;
      label B_u:
      var jp:int = c[165]:ushort;
      var kp:int = -1;
      var lp:int = jp + kp;
      c[165]:short = lp;
      label B_t:
      var mp:int = c[53]:int;
      var np:int = 3;
      var op:int = mp + np;
      c[53]:int = op;
      continue L_p;
    }
    unreachable;
    label B_o:
    var pp:int = c[59]:int;
    var qp:int = 65535;
    var rp:int = pp & qp;
    var sp:int = 0;
    var tp:int = sp - rp;
    var up:int = 16;
    var vp:int = tp << up;
    var wp:int = vp >> up;
    var xp:int = 0;
    var yp:int = wp << xp;
    var zp:int = 1;
    var aq:int = zp;
    if (yp) goto B_v;
    var bq:int = c[357]:ubyte;
    var cq:int = 255;
    var dq:int = bq & cq;
    var eq:int = 0;
    var fq:int = dq;
    var gq:int = eq;
    var hq:int = fq != gq;
    aq = hq;
    label B_v:
    var iq:int = aq;
    var jq:int = 1;
    var kq:int = iq & jq;
    c[357]:byte = kq;
    var lq:int = 32205;
    c[175]:short = lq;
    var mq:int = c[53]:int;
    c[329]:byte = mq;
    var nq:int = c[357]:ubyte;
    var oq:int = c[165]:ushort;
    c[179]:short = oq;
    c[328]:byte = oq;
    var pq:int = i32_extend8_s(oq);
    c[163]:short = pq;
    var qq:int = nq % pq;
    var rq:int = c[329]:ubyte;
    var sq:int = rq + jq;
    c[329]:byte = sq;
    var tq:int = 255;
    var uq:int = sq & tq;
    var vq:int = c[53]:int;
    var wq:int = uq;
    var xq:int = vq;
    var yq:int = wq <= xq;
    var zq:int = 1;
    var ar:int = yq & zq;
    c[59]:int = ar;
    var br:int = qq ^ ar;
    var cr:int = c[52]:int;
    var dr:int = cr ^ br;
    c[52]:int = dr;
    var er:int = 16;
    var fr:int = dr << er;
    var gr:int = fr >> er;
    var hr:int = 12;
    var ir:int = gr << hr;
    var jr:int = c[44]:int;
    var kr:int = ir | jr;
    var lr:int = c[235]:ubyte;
    var mr:int = 255;
    var nr:int = lr & mr;
    var or:int = nr & kr;
    c[235]:byte = or;
    label B_j:
    goto B_g;
    label B_h:
    var pr:int = 2008449297;
    c[42]:int = pr;
    var qr:int = 1271869772;
    c[41]:int = qr;
    var rr:int = 0;
    c[40]:int = rr;
    var sr:int = c[328]:ubyte;
    var tr:int = 24;
    var ur:int = sr << tr;
    ur >> tr;
    var vr:int = c[165]:ushort;
    c[175]:short = vr;
    var wr:int = 65535;
    var xr:int = vr & wr;
    var yr:int = 1;
    var zr:int = yr;
    if (xr) goto B_w;
    var as:int = c[84]:int;
    var bs:int = c[163]:ushort;
    var cs:int = 16;
    var ds:int = bs << cs;
    var es:int = ds >> cs;
    var fs:int = as + es;
    c[52]:int = fs;
    var gs:int = 0;
    var hs:int = fs;
    var is:int = gs;
    var js:int = hs != is;
    zr = js;
    label B_w:
    zr;
    var ks:int = c[163]:ushort;
    var ls:int = 16;
    var ms:int = ks << ls;
    var ns:int = ms >> ls;
    var os:int = c[328]:ubyte;
    var ps:int = 24;
    var qs:int = os << ps;
    var rs:int = qs >> ps;
    var ss:int = ns % rs;
    var ts:int = 1;
    var us:int = ts;
    if (ss) goto B_x;
    var vs:int = 1;
    us = vs;
    label B_x:
    var ws:int = us;
    var xs:int = 1;
    var ys:int = ws & xs;
    c[51]:int = ys;
    var zs:int = c[42]:int;
    var at:int = c[61]:int;
    var bt:int = zs;
    var ct:int = at;
    var dt:int = bt == ct;
    var et:int = 1;
    var ft:int = dt & et;
    if (eqz(ft)) goto B_z;
    var gt:int = 6;
    c[159]:byte = gt;
    var ht:int = -487952246;
    c[38]:int = ht;
    var it:int = c[51]:int;
    var jt:int = c[84]:int;
    var kt:int = it & jt;
    var lt:int = i32_extend8_s(kt);
    var mt:int = c[357]:ubyte;
    var nt:int = -1;
    var ot:int = mt + nt;
    c[357]:byte = ot;
    var pt:int = 255;
    var qt:int = ot & pt;
    var rt:int = c[88]:int;
    var st:int = c[42]:int;
    var tt:int = rt - st;
    var ut:int = tt & pt;
    var vt:int = qt / ut;
    var wt:int = i32_extend8_s(vt);
    var xt:int = lt + wt;
    var yt:int = c[80]:int;
    var zt:int = yt | xt;
    c[80]:int = zt;
    var au:int = c[159]:byte;
    var bu:int = au ^ nt;
    var cu:int = c[203]:byte;
    var du:int = cu | bu;
    c[203]:byte = du;
    var eu:int = c[175]:ushort;
    var fu:int = eu + nt;
    c[175]:short = fu;
    var gu:int = 65535;
    var hu:int = fu & gu;
    var iu:int = -4;
    var ju:int = iu;
    var ku:int = hu;
    var lu:int = ju == ku;
    var mu:int = 1;
    var nu:int = lu & mu;
    var ou:int = du * nu;
    if (eqz(ou)) goto B_ba;
    var pu:int = 1454611514;
    c[37]:int = pu;
    var qu:int = c[328]:ubyte;
    var ru:int = 24;
    var su:int = qu << ru;
    var tu:int = su >> ru;
    var uu:int = c[37]:int;
    var vu:int = 16;
    var wu:int = uu << vu;
    wu >> vu;
    var xu:int = 64014;
    c[41]:int = xu;
    var yu:int = c[163]:ushort;
    var zu:int = 255;
    var av:int = yu & zu;
    var bv:int = c[159]:ubyte;
    var cv:int = 255;
    var dv:int = bv & cv;
    var ev:int = av * dv;
    var fv:int = 1;
    var gv:int = fv;
    if (ev) goto B_ca;
    var hv:int = 0;
    gv = hv;
    label B_ca:
    gv;
    var iv:int = 1;
    c[159]:short = iv;
    var jv:int = c[61]:int;
    var kv:int = 1;
    var lv:int = jv | kv;
    c[61]:int = lv;
    var mv:int = tu;
    var nv:int = lv;
    var ov:int = mv < nv;
    var pv:int = 1;
    var qv:int = ov & pv;
    var rv:int = c[42]:int;
    var sv:int = qv;
    var tv:int = rv;
    var uv:int = sv != tv;
    var vv:int = 1;
    var wv:int = uv & vv;
    c[78]:int = wv;
    c[77]:int = wv;
    goto B_aa;
    label B_ba:
    var xv:int = c[41]:int;
    c[76]:int = xv;
    label B_aa:
    var yv:int = 0;
    c[78]:int = yv;
    loop L_ea {
      var zv:int = c[78]:int;
      var aw:int = 45;
      var bw:int = zv;
      var cw:int = aw;
      var dw:int = bw < cw;
      var ew:int = 1;
      var fw:int = dw & ew;
      if (eqz(fw)) goto B_da;
      var gw:int = 0;
      c[159]:short = gw;
      loop L_ga {
        var hw:int = c[159]:ushort;
        var iw:int = 65535;
        var jw:int = hw & iw;
        var kw:int = 18;
        var lw:int = jw;
        var mw:int = kw;
        var nw:int = lw < mw;
        var ow:int = 1;
        var pw:int = nw & ow;
        if (eqz(pw)) goto B_fa;
        var qw:int = c[75]:int;
        var rw:int = 1;
        var sw:int = qw + rw;
        c[75]:int = sw;
        var tw:int = c[159]:ushort;
        var uw:int = 65535;
        var vw:int = tw & uw;
        var ww:int = 7;
        var xw:int = vw + ww;
        c[159]:short = xw;
        continue L_ga;
      }
      unreachable;
      label B_fa:
      var yw:int = c[159]:ushort;
      var zw:int = 65535;
      var ax:int = yw & zw;
      c[52]:int = ax;
      var bx:int = c[52]:int;
      var cx:int = 0;
      var dx:int = cx;
      if (eqz(bx)) goto B_ha;
      var ex:int = c[60]:int;
      var fx:int = 18227851;
      var gx:int = ex - fx;
      var hx:int = 255;
      var ix:int = gx & hx;
      var jx:int = c[299]:ubyte;
      var kx:int = 255;
      var lx:int = jx & kx;
      var mx:int = ix / lx;
      var nx:int = 24;
      var ox:int = mx << nx;
      var px:int = ox >> nx;
      var qx:int = -1;
      var rx:int = px + qx;
      var sx:int = c[165]:ushort;
      var tx:int = 65535;
      var ux:int = sx & tx;
      var vx:int = rx;
      var wx:int = ux;
      var xx:int = vx < wx;
      dx = xx;
      label B_ha:
      dx;
      var yx:int = c[179]:ushort;
      var zx:int = 16;
      var ay:int = yx << zx;
      var by:int = ay >> zx;
      var cy:int = -996940470;
      var dy:int = by ^ cy;
      var ey:int = 65535;
      var fy:int = dy & ey;
      var gy:int = 62596;
      var hy:int = gy / fy;
      var iy:int = c[38]:int;
      var jy:int = iy & hy;
      c[38]:int = jy;
      var ky:int = c[78]:int;
      var ly:int = 4;
      var my:int = ky + ly;
      c[78]:int = my;
      continue L_ea;
    }
    unreachable;
    label B_da:
    goto B_y;
    label B_z:
    var ny:int = -10;
    c[36]:int = ny;
    var oy:int = -1;
    c[35]:int = oy;
    var py:int = 55;
    c[139]:byte = py;
    var qy:int = c[85]:int;
    var ry:int = 1;
    var sy:int = ry;
    if (qy) goto B_ia;
    var ty:int = c[76]:int;
    var uy:int = 1;
    var vy:int = ty + uy;
    c[76]:int = vy;
    var wy:int = 0;
    var xy:int = vy;
    var yy:int = wy;
    var zy:int = xy != yy;
    var az:int = -1;
    var bz:int = zy ^ az;
    sy = bz;
    label B_ia:
    var cz:int = sy;
    var dz:int = 1;
    var ez:int = cz & dz;
    c[57]:int = ez;
    var fz:int = 0;
    c[159]:short = fz;
    var gz:int = c[159]:ushort;
    var hz:int = 65535;
    var iz:int = gz & hz;
    var jz:int = 6;
    var kz:int = iz;
    var lz:int = jz;
    var mz:int = kz == lz;
    var nz:int = 1;
    var oz:int = mz & nz;
    if (eqz(oz)) goto B_ja;
    var pz:int = 830192000;
    c[33]:int = pz;
    var qz:int = 230;
    c[131]:byte = qz;
    var rz:int = c[36]:int;
    var sz:int = -1;
    var tz:int = rz + sz;
    c[36]:int = tz;
    var uz:int = c[140]:ushort;
    var vz:int = 1;
    var wz:int = uz + vz;
    c[140]:short = wz;
    var xz:int = 0;
    c[357]:byte = xz;
    var yz:int = c[357]:ubyte;
    var zz:int = 255;
    var aaa:int = yz & zz;
    var baa:int = 16;
    var caa:int = aaa;
    var daa:int = baa;
    var eaa:int = caa >= daa;
    var faa:int = 1;
    var gaa:int = eaa & faa;
    if (eqz(gaa)) goto B_ka;
    var haa:int = c[90]:int;
    var iaa:int = c[179]:ushort;
    var jaa:int = c[357]:ubyte;
    var kaa:int = c[88]:int;
    var laa:int = c[175]:ushort;
    var maa:int = c[86]:int;
    var naa:int = c[85]:int;
    var oaa:int = c[84]:int;
    var paa:int = c[83]:int;
    var qaa:int = c[165]:ushort;
    var raa:int = c[329]:ubyte;
    var saa:int = c[328]:ubyte;
    var taa:int = c[163]:ushort;
    var uaa:int = c[80]:int;
    var vaa:int = c[159]:ushort;
    var waa:int = c[78]:int;
    var xaa:int = c[77]:int;
    var yaa:int = c[76]:int;
    var zaa:int = c[75]:int;
    var aba:int = c[299]:ubyte;
    var bba:int = c[148]:ushort;
    var cba:int = c[295]:ubyte;
    var dba:int = c[72]:int;
    var eba:int = c[71]:int;
    var fba:int = c[141]:ushort;
    var gba:int = c[140]:ushort;
    var hba:int = c[279]:ubyte;
    var iba:int = c[278]:ubyte;
    var jba:int = c[277]:ubyte;
    var kba:int = c[68]:int;
    var lba:int = c[67]:int;
    var mba:int = c[66]:int;
    var nba:int = c[263]:ubyte;
    var oba:int = c[262]:ubyte;
    var pba:int = c[261]:ubyte;
    var qba:int = c[64]:int;
    var rba:int = 16;
    var sba:int = iaa << rba;
    var tba:int = sba >> rba;
    var uba:int = 255;
    var vba:int = jaa & uba;
    var wba:int = 65535;
    var xba:int = laa & wba;
    var yba:int = 65535;
    var zba:int = qaa & yba;
    var aca:int = 255;
    var bca:int = raa & aca;
    var cca:int = 24;
    var dca:int = saa << cca;
    var eca:int = dca >> cca;
    var fca:int = 16;
    var gca:int = taa << fca;
    var hca:int = gca >> fca;
    var ica:int = 65535;
    var jca:int = vaa & ica;
    var kca:int = 255;
    var lca:int = aba & kca;
    var mca:int = 16;
    var nca:int = bba << mca;
    var oca:int = nca >> mca;
    var pca:int = 24;
    var qca:int = cba << pca;
    var rca:int = qca >> pca;
    var sca:int = 16;
    var tca:int = fba << sca;
    var uca:int = tca >> sca;
    var vca:int = 65535;
    var wca:int = gba & vca;
    var xca:int = 24;
    var yca:int = hba << xca;
    var zca:int = yca >> xca;
    var ada:int = 255;
    var bda:int = iba & ada;
    var cda:int = 255;
    var dda:int = jba & cda;
    var eda:int = 24;
    var fda:int = nba << eda;
    var gda:int = fda >> eda;
    var hda:int = 24;
    var ida:int = oba << hda;
    var jda:int = ida >> hda;
    var kda:int = 255;
    var lda:int = pba & kda;
    set_var(haa,
            tba,
            vba,
            kaa,
            xba,
            maa,
            naa,
            oaa,
            paa,
            zba,
            bca,
            eca,
            hca,
            uaa,
            jca,
            waa,
            xaa,
            yaa,
            zaa,
            lca,
            oca,
            rca,
            dba,
            eba,
            uca,
            wca,
            zca,
            bda,
            dda,
            kba,
            lba,
            mba,
            gda,
            jda,
            lda,
            qba);
    var mda:int = c[33]:int;
    c[367]:byte = mda;
    goto B_a;
    label B_ka:
    var nda:int = 27249;
    c[148]:short = nda;
    var oda:int = 9;
    c[51]:int = oda;
    var pda:int = 1;
    var qda:int = 1;
    var rda:int = pda & qda;
    if (eqz(rda)) goto B_la;
    var sda:int = c[90]:int;
    var tda:int = c[179]:ushort;
    var uda:int = c[357]:ubyte;
    var vda:int = c[88]:int;
    var wda:int = c[175]:ushort;
    var xda:int = c[86]:int;
    var yda:int = c[85]:int;
    var zda:int = c[84]:int;
    var aea:int = c[83]:int;
    var bea:int = c[165]:ushort;
    var cea:int = c[329]:ubyte;
    var dea:int = c[328]:ubyte;
    var eea:int = c[163]:ushort;
    var fea:int = c[80]:int;
    var gea:int = c[159]:ushort;
    var hea:int = c[78]:int;
    var iea:int = c[77]:int;
    var jea:int = c[76]:int;
    var kea:int = c[75]:int;
    var lea:int = c[299]:ubyte;
    var mea:int = c[148]:ushort;
    var nea:int = c[295]:ubyte;
    var oea:int = c[72]:int;
    var pea:int = c[71]:int;
    var qea:int = c[141]:ushort;
    var rea:int = c[140]:ushort;
    var sea:int = c[279]:ubyte;
    var tea:int = c[278]:ubyte;
    var uea:int = c[277]:ubyte;
    var vea:int = c[68]:int;
    var wea:int = c[67]:int;
    var xea:int = c[66]:int;
    var yea:int = c[263]:ubyte;
    var zea:int = c[262]:ubyte;
    var afa:int = c[261]:ubyte;
    var bfa:int = c[64]:int;
    var cfa:int = 16;
    var dfa:int = tda << cfa;
    var efa:int = dfa >> cfa;
    var ffa:int = 255;
    var gfa:int = uda & ffa;
    var hfa:int = 65535;
    var ifa:int = wda & hfa;
    var jfa:int = 65535;
    var kfa:int = bea & jfa;
    var lfa:int = 255;
    var mfa:int = cea & lfa;
    var nfa:int = 24;
    var ofa:int = dea << nfa;
    var pfa:int = ofa >> nfa;
    var qfa:int = 16;
    var rfa:int = eea << qfa;
    var sfa:int = rfa >> qfa;
    var tfa:int = 65535;
    var ufa:int = gea & tfa;
    var vfa:int = 255;
    var wfa:int = lea & vfa;
    var xfa:int = 16;
    var yfa:int = mea << xfa;
    var zfa:int = yfa >> xfa;
    var aga:int = 24;
    var bga:int = nea << aga;
    var cga:int = bga >> aga;
    var dga:int = 16;
    var ega:int = qea << dga;
    var fga:int = ega >> dga;
    var gga:int = 65535;
    var hga:int = rea & gga;
    var iga:int = 24;
    var jga:int = sea << iga;
    var kga:int = jga >> iga;
    var lga:int = 255;
    var mga:int = tea & lga;
    var nga:int = 255;
    var oga:int = uea & nga;
    var pga:int = 24;
    var qga:int = yea << pga;
    var rga:int = qga >> pga;
    var sga:int = 24;
    var tga:int = zea << sga;
    var uga:int = tga >> sga;
    var vga:int = 255;
    var wga:int = afa & vga;
    set_var(sda,
            efa,
            gfa,
            vda,
            ifa,
            xda,
            yda,
            zda,
            aea,
            kfa,
            mfa,
            pfa,
            sfa,
            fea,
            ufa,
            hea,
            iea,
            jea,
            kea,
            wfa,
            zfa,
            cga,
            oea,
            pea,
            fga,
            hga,
            kga,
            mga,
            oga,
            vea,
            wea,
            xea,
            rga,
            uga,
            wga,
            bfa);
    var xga:int = c[60]:int;
    c[367]:byte = xga;
    goto B_a;
    label B_la:
    var yga:int = c[51]:int;
    var zga:int = c[53]:int;
    var aha:int = -1;
    var bha:int = zga + aha;
    var cha:int = c[235]:ubyte;
    var dha:int = bha != cha;
    var eha:int = c[80]:int;
    var fha:int = dha != eha;
    var gha:int = 3;
    var hha:int = fha << gha;
    var iha:int = 1;
    var jha:int = hha | iha;
    var kha:int = i32_extend8_s(eha);
    jha * kha;
    var lha:int = yga;
    var mha:int = nha;
    var oha:int = lha > mha;
    var pha:int = 1;
    var qha:int = oha & pha;
    var rha:int = 65535;
    var sha:int = qha & rha;
    var tha:int = c[33]:int;
    var uha:int = 65535;
    var vha:int = tha & uha;
    var wha:int = sha << vha;
    c[41]:int = wha;
    var xha:int = c[299]:ubyte;
    var yha:int = 255;
    var zha:int = xha & yha;
    var aia:int = 1;
    var bia:int = aia;
    if (zha) goto B_ma;
    var cia:int = 1;
    bia = cia;
    label B_ma:
    var dia:int = bia;
    var eia:int = 1;
    var fia:int = dia & eia;
    c[279]:byte = fia;
    var gia:int = 24;
    var hia:int = fia << gia;
    var iia:int = hia >> gia;
    var jia:int = c[35]:int;
    var kia:int = jia | iia;
    c[35]:int = kia;
    var lia:int = c[139]:ubyte;
    var mia:int = 0;
    var nia:int = 255;
    var oia:int = lia & nia;
    var pia:int = 255;
    var qia:int = mia & pia;
    var ria:int = oia != qia;
    var sia:int = 1;
    var tia:int = ria & sia;
    if (eqz(tia)) goto B_na;
    goto B_ja;
    label B_na:
    var uia:int = c[33]:int;
    var via:int = c[165]:ushort;
    var wia:int = 65535;
    var xia:int = via & wia;
    var yia:int = uia;
    var zia:int = xia;
    var aja:int = yia != zia;
    var bja:int = 1;
    var cja:int = aja & bja;
    var dja:int = c[278]:ubyte;
    var eja:int = 255;
    var fja:int = dja & eja;
    var gja:int = fja & cja;
    c[278]:byte = gja;
    var hja:int = 255;
    var ija:int = gja & hja;
    var jja:int = c[277]:ubyte;
    var kja:int = 255;
    var lja:int = jja & kja;
    var mja:int = lja ^ ija;
    c[277]:byte = mja;
    var nja:int = c[90]:int;
    var oja:int = c[179]:ushort;
    var pja:int = c[357]:ubyte;
    var qja:int = c[88]:int;
    var rja:int = c[175]:ushort;
    var sja:int = c[86]:int;
    var tja:int = c[85]:int;
    var uja:int = c[84]:int;
    var vja:int = c[83]:int;
    var wja:int = c[165]:ushort;
    var xja:int = c[329]:ubyte;
    var yja:int = c[328]:ubyte;
    var zja:int = c[163]:ushort;
    var aka:int = c[80]:int;
    var bka:int = c[159]:ushort;
    var cka:int = c[78]:int;
    var dka:int = c[77]:int;
    var eka:int = c[76]:int;
    var fka:int = c[75]:int;
    var gka:int = c[299]:ubyte;
    var hka:int = c[148]:ushort;
    var ika:int = c[295]:ubyte;
    var jka:int = c[72]:int;
    var kka:int = c[71]:int;
    var lka:int = c[141]:ushort;
    var mka:int = c[140]:ushort;
    var nka:int = c[279]:ubyte;
    var oka:int = c[278]:ubyte;
    var pka:int = c[277]:ubyte;
    var qka:int = c[68]:int;
    var rka:int = c[67]:int;
    var ska:int = c[66]:int;
    var tka:int = c[263]:ubyte;
    var uka:int = c[262]:ubyte;
    var vka:int = c[261]:ubyte;
    var wka:int = c[64]:int;
    var xka:int = 16;
    var yka:int = oja << xka;
    var zka:int = yka >> xka;
    var ala:int = 255;
    var bla:int = pja & ala;
    var cla:int = 65535;
    var dla:int = rja & cla;
    var ela:int = 65535;
    var fla:int = wja & ela;
    var gla:int = 255;
    var hla:int = xja & gla;
    var ila:int = 24;
    var jla:int = yja << ila;
    var kla:int = jla >> ila;
    var lla:int = 16;
    var mla:int = zja << lla;
    var nla:int = mla >> lla;
    var ola:int = 65535;
    var pla:int = bka & ola;
    var qla:int = 255;
    var rla:int = gka & qla;
    var sla:int = 16;
    var tla:int = hka << sla;
    var ula:int = tla >> sla;
    var vla:int = 24;
    var wla:int = ika << vla;
    var xla:int = wla >> vla;
    var yla:int = 16;
    var zla:int = lka << yla;
    var ama:int = zla >> yla;
    var bma:int = 65535;
    var cma:int = mka & bma;
    var dma:int = 24;
    var ema:int = nka << dma;
    var fma:int = ema >> dma;
    var gma:int = 255;
    var hma:int = oka & gma;
    var ima:int = 255;
    var jma:int = pka & ima;
    var kma:int = 24;
    var lma:int = tka << kma;
    var mma:int = lma >> kma;
    var nma:int = 24;
    var oma:int = uka << nma;
    var pma:int = oma >> nma;
    var qma:int = 255;
    var rma:int = vka & qma;
    set_var(nja,
            zka,
            bla,
            qja,
            dla,
            sja,
            tja,
            uja,
            vja,
            fla,
            hla,
            kla,
            nla,
            aka,
            pla,
            cka,
            dka,
            eka,
            fka,
            rla,
            ula,
            xla,
            jka,
            kka,
            ama,
            cma,
            fma,
            hma,
            jma,
            qka,
            rka,
            ska,
            mma,
            pma,
            rma,
            wka);
    var sma:int = c[33]:int;
    c[367]:byte = sma;
    goto B_a;
    label B_ja:
    label B_y:
    var tma:int = c[90]:int;
    var uma:int = c[179]:ushort;
    var vma:int = c[357]:ubyte;
    var wma:int = c[88]:int;
    var xma:int = c[175]:ushort;
    var yma:int = c[86]:int;
    var zma:int = c[85]:int;
    var ana:int = c[84]:int;
    var bna:int = c[83]:int;
    var cna:int = c[165]:ushort;
    var dna:int = c[329]:ubyte;
    var ena:int = c[328]:ubyte;
    var fna:int = c[163]:ushort;
    var gna:int = c[80]:int;
    var hna:int = c[159]:ushort;
    var ina:int = c[78]:int;
    var jna:int = c[77]:int;
    var kna:int = c[76]:int;
    var lna:int = c[75]:int;
    var mna:int = c[299]:ubyte;
    var nna:int = c[148]:ushort;
    var ona:int = c[295]:ubyte;
    var pna:int = c[72]:int;
    var qna:int = c[71]:int;
    var rna:int = c[141]:ushort;
    var sna:int = c[140]:ushort;
    var tna:int = c[279]:ubyte;
    var una:int = c[278]:ubyte;
    var vna:int = c[277]:ubyte;
    var wna:int = c[68]:int;
    var xna:int = c[67]:int;
    var yna:int = c[66]:int;
    var zna:int = c[263]:ubyte;
    var aoa:int = c[262]:ubyte;
    var boa:int = c[261]:ubyte;
    var coa:int = c[64]:int;
    var doa:int = 16;
    var eoa:int = uma << doa;
    var foa:int = eoa >> doa;
    var goa:int = 255;
    var hoa:int = vma & goa;
    var ioa:int = 65535;
    var joa:int = xma & ioa;
    var koa:int = 65535;
    var loa:int = cna & koa;
    var moa:int = 255;
    var noa:int = dna & moa;
    var ooa:int = 24;
    var poa:int = ena << ooa;
    var qoa:int = poa >> ooa;
    var roa:int = 16;
    var soa:int = fna << roa;
    var toa:int = soa >> roa;
    var uoa:int = 65535;
    var voa:int = hna & uoa;
    var woa:int = 255;
    var xoa:int = mna & woa;
    var yoa:int = 16;
    var zoa:int = nna << yoa;
    var apa:int = zoa >> yoa;
    var bpa:int = 24;
    var cpa:int = ona << bpa;
    var dpa:int = cpa >> bpa;
    var epa:int = 16;
    var fpa:int = rna << epa;
    var gpa:int = fpa >> epa;
    var hpa:int = 65535;
    var ipa:int = sna & hpa;
    var jpa:int = 24;
    var kpa:int = tna << jpa;
    var lpa:int = kpa >> jpa;
    var mpa:int = 255;
    var npa:int = una & mpa;
    var opa:int = 255;
    var ppa:int = vna & opa;
    var qpa:int = 24;
    var rpa:int = zna << qpa;
    var spa:int = rpa >> qpa;
    var tpa:int = 24;
    var upa:int = aoa << tpa;
    var vpa:int = upa >> tpa;
    var wpa:int = 255;
    var xpa:int = boa & wpa;
    set_var(tma,
            foa,
            hoa,
            wma,
            joa,
            yma,
            zma,
            ana,
            bna,
            loa,
            noa,
            qoa,
            toa,
            gna,
            voa,
            ina,
            jna,
            kna,
            lna,
            xoa,
            apa,
            dpa,
            pna,
            qna,
            gpa,
            ipa,
            lpa,
            npa,
            ppa,
            wna,
            xna,
            yna,
            spa,
            vpa,
            xpa,
            coa);
    var ypa:int = c[41]:int;
    c[367]:byte = ypa;
    goto B_a;
    label B_g:
    var zpa:int = c[51]:int;
    if (eqz(zpa)) goto B_oa;
    goto B_f;
    label B_oa:
    var aqa:int = c[66]:int;
    var bqa:int = -1;
    var cqa:int = aqa + bqa;
    c[66]:int = cqa;
    label B_f:
    var dqa:int = c[88]:int;
    var eqa:int = 1;
    var fqa:int = dqa + eqa;
    c[88]:int = fqa;
    continue L_c;
  }
  unreachable;
  label B_b:
  var gqa:int = 0;
  c[179]:short = gqa;
  loop L_qa {
    var hqa:int = c[179]:ushort;
    var iqa:int = 16;
    var jqa:int = hqa << iqa;
    var kqa:int = jqa >> iqa;
    var lqa:int = -23;
    var mqa:int = kqa;
    var nqa:int = lqa;
    var oqa:int = mqa == nqa;
    var pqa:int = 1;
    var qqa:int = oqa & pqa;
    if (eqz(qqa)) goto B_pa;
    var rqa:int = 8;
    c[130]:byte = rqa;
    var sqa:int = 0;
    c[31]:int = sqa;
    var tqa:int = 611444237;
    c[30]:int = tqa;
    var uqa:int = -8;
    c[29]:int = uqa;
    var vqa:int = 246;
    c[115]:byte = vqa;
    var wqa:int = -303518769;
    c[27]:int = wqa;
    var xqa:int = 12;
    c[107]:byte = xqa;
    var yqa:int = 1741049137;
    c[25]:int = yqa;
    var zqa:int = 0;
    c[61]:int = zqa;
    loop L_sa {
      var ara:int = c[61]:int;
      var bra:int = -26;
      var cra:int = ara;
      var dra:int = bra;
      var era:int = cra < dra;
      var fra:int = 1;
      var gra:int = era & fra;
      if (eqz(gra)) goto B_ra;
      var hra:int = 221;
      c[99]:byte = hra;
      var ira:int = 4;
      c[23]:int = ira;
      var jra:int = -977233121;
      c[22]:int = jra;
      var kra:int = c[165]:ushort;
      var lra:int = 65535;
      var mra:int = kra & lra;
      var nra:int = 6;
      var ora:int = mra ^ nra;
      c[30]:int = ora;
      var pra:int = c[299]:ubyte;
      var qra:int = 255;
      var rra:int = pra & qra;
      var sra:int = 16;
      var tra:int = rra << sra;
      var ura:int = tra >> sra;
      var vra:int = c[357]:ubyte;
      var wra:int = 255;
      var xra:int = vra & wra;
      var yra:int = 16;
      var zra:int = xra << yra;
      var asa:int = zra >> yra;
      var bsa:int = ura >> asa;
      var csa:int = 255;
      var dsa:int = bsa & csa;
      var esa:int = c[163]:ushort;
      var fsa:int = 255;
      var gsa:int = esa & fsa;
      var hsa:int = dsa >> gsa;
      var isa:int = c[59]:int;
      var jsa:int = hsa & isa;
      var ksa:int = 0;
      var lsa:int = jsa;
      var msa:int = ksa;
      var nsa:int = lsa <= msa;
      var osa:int = 1;
      var psa:int = nsa & osa;
      var qsa:int = 899033624;
      var rsa:int = psa;
      var ssa:int = qsa;
      var tsa:int = rsa <= ssa;
      var usa:int = 1;
      var vsa:int = tsa & usa;
      var wsa:int = c[29]:int;
      var xsa:int = vsa;
      var ysa:int = wsa;
      var zsa:int = xsa != ysa;
      var ata:int = 1;
      var bta:int = zsa & ata;
      if (eqz(bta)) goto B_ua;
      var cta:int = 253;
      c[87]:byte = cta;
      var dta:int = c[235]:ubyte;
      var eta:int = 255;
      var fta:int = dta & eta;
      var gta:int = c[29]:int;
      var hta:int = gta | fta;
      c[29]:int = hta;
      var ita:int = 65535;
      var jta:int = hta & ita;
      var kta:int = 1;
      var lta:int = jta << kta;
      var mta:int = c[130]:ubyte;
      var nta:int = 255;
      var ota:int = mta & nta;
      var pta:int = 1;
      var qta:int = pta;
      if (ota) goto B_va;
      var rta:int = c[235]:ubyte;
      var sta:int = 24;
      var tta:int = rta << sta;
      var uta:int = tta >> sta;
      var vta:int = 1;
      var wta:int = uta >> vta;
      var xta:int = 0;
      var yta:int = wta;
      var zta:int = xta;
      var aua:int = yta != zta;
      qta = aua;
      label B_va:
      var bua:int = qta;
      var cua:int = 1;
      var dua:int = bua & cua;
      var eua:int = lta;
      var fua:int = dua;
      var gua:int = eua != fua;
      var hua:int = 1;
      var iua:int = gua & hua;
      var jua:int = 16;
      var kua:int = iua << jua;
      var lua:int = kua >> jua;
      var mua:int = 0;
      var nua:int = mua - lua;
      var oua:int = 0;
      var pua:int = nua ^ oua;
      var qua:int = 0;
      var rua:int = pua;
      var sua:int = qua;
      var tua:int = rua == sua;
      var uua:int = 1;
      var vua:int = tua & uua;
      c[30]:int = vua;
      var wua:int = -629750299;
      var xua:int = vua / wua;
      var yua:int = c[90]:int;
      var zua:int = xua;
      var ava:int = yua;
      var bva:int = zua > ava;
      var cva:int = 1;
      var dva:int = bva & cva;
      var eva:int = -3;
      var fva:int = dva;
      var gva:int = eva;
      var hva:int = fva >= gva;
      var iva:int = 1;
      var jva:int = hva & iva;
      var kva:int = -3;
      var lva:int = jva + kva;
      var mva:int = c[67]:int;
      var nva:int = mva & lva;
      c[67]:int = nva;
      var ova:int = -3;
      c[23]:int = ova;
      var pva:int = -3;
      c[68]:int = pva;
      goto B_ta;
      label B_ua:
      var qva:int = 7585;
      c[42]:short = qva;
      var rva:int = c[179]:ushort;
      var sva:int = 24;
      var tva:int = rva << sva;
      var uva:int = tva >> sva;
      var vva:int = c[130]:ubyte;
      var wva:int = 24;
      var xva:int = vva << wva;
      var yva:int = xva >> wva;
      var zva:int = uva - yva;
      var awa:int = c[90]:int;
      var bwa:int = 24;
      var cwa:int = awa << bwa;
      var dwa:int = cwa >> bwa;
      var ewa:int = 6;
      var fwa:int = dwa - ewa;
      var gwa:int = 1;
      var hwa:int = gwa;
      if (fwa) goto B_wa;
      var iwa:int = c[179]:ushort;
      var jwa:int = 16;
      var kwa:int = iwa << jwa;
      var lwa:int = kwa >> jwa;
      var mwa:int = 0;
      var nwa:int = lwa;
      var owa:int = mwa;
      var pwa:int = nwa != owa;
      hwa = pwa;
      label B_wa:
      var qwa:int = hwa;
      var rwa:int = 1;
      var swa:int = qwa & rwa;
      var twa:int = 378701460;
      var uwa:int = twa / swa;
      var vwa:int = 1;
      var wwa:int = vwa;
      if (uwa) goto B_xa;
      var xwa:int = 1;
      wwa = xwa;
      label B_xa:
      var ywa:int = wwa;
      var zwa:int = 1;
      var axa:int = ywa & zwa;
      var bxa:int = 29873;
      var cxa:int = axa | bxa;
      var dxa:int = 16;
      var exa:int = cxa << dxa;
      var fxa:int = exa >> dxa;
      var gxa:int = c[328]:ubyte;
      var hxa:int = 24;
      var ixa:int = gxa << hxa;
      var jxa:int = ixa >> hxa;
      var kxa:int = 16;
      var lxa:int = jxa << kxa;
      var mxa:int = lxa >> kxa;
      var nxa:int = fxa - mxa;
      var oxa:int = zva;
      var pxa:int = nxa;
      var qxa:int = oxa >= pxa;
      var rxa:int = 1;
      var sxa:int = qxa & rxa;
      var txa:int = c[277]:ubyte;
      var uxa:int = 255;
      var vxa:int = txa & uxa;
      var wxa:int = sxa;
      var xxa:int = vxa;
      var yxa:int = wxa > xxa;
      var zxa:int = 1;
      var aya:int = yxa & zxa;
      var bya:int = 16;
      var cya:int = aya << bya;
      var dya:int = cya >> bya;
      var eya:int = c[31]:int;
      var fya:int = 16;
      var gya:int = eya << fya;
      var hya:int = gya >> fya;
      var iya:int = dya >> hya;
      var jya:int = 238;
      var kya:int = iya;
      var lya:int = jya;
      var mya:int = kya < lya;
      var nya:int = 1;
      var oya:int = mya & nya;
      var pya:int = c[42]:ushort;
      var qya:int = 65535;
      var rya:int = pya & qya;
      var sya:int = oya ^ rya;
      var tya:int = c[159]:ushort;
      var uya:int = 65535;
      var vya:int = tya & uya;
      var wya:int = sya / vya;
      var xya:int = 255;
      var yya:int = wya & xya;
      var zya:int = c[175]:ushort;
      var aza:int = 255;
      var bza:int = zya & aza;
      var cza:int = yya / bza;
      var dza:int = -1;
      var eza:int = cza ^ dza;
      var fza:int = c[67]:int;
      var gza:int = fza & eza;
      c[67]:int = gza;
      label B_ta:
      var hza:int = c[261]:ubyte;
      var iza:int = 1;
      var jza:int = hza + iza;
      c[261]:byte = jza;
      var kza:int = c[61]:int;
      var lza:int = 7;
      var mza:int = kza - lza;
      c[61]:int = mza;
      continue L_sa;
    }
    unreachable;
    label B_ra:
    var nza:int = c[148]:ushort;
    var oza:int = 24;
    var pza:int = nza << oza;
    var qza:int = pza >> oza;
    var rza:int = -100;
    var sza:int = rza - qza;
    var tza:int = 65535;
    var uza:int = sza & tza;
    var vza:int = 8;
    var wza:int = uza >> vza;
    var xza:int = 378701460;
    var yza:int = wza ^ xza;
    var zza:int = c[357]:ubyte;
    var aab:int = 255;
    var bab:int = zza & aab;
    var cab:int = yza & bab;
    var dab:int = 255;
    var eab:int = cab & dab;
    var fab:int = 27;
    var gab:int = eab - fab;
    var hab:int = 0;
    var iab:int = hab - gab;
    var jab:int = 51130;
    var kab:int = jab;
    var lab:int = iab;
    var mab:int = kab == lab;
    var nab:int = 1;
    var oab:int = mab & nab;
    var pab:int = 24;
    var qab:int = oab << pab;
    var rab:int = qab >> pab;
    var sab:int = 12;
    var tab:int = rab * sab;
    var uab:int = 65535;
    var vab:int = tab & uab;
    var wab:int = c[165]:ushort;
    var xab:int = 65535;
    var yab:int = wab & xab;
    var zab:int = vab % yab;
    var abb:int = c[299]:ubyte;
    var bbb:int = 255;
    var cbb:int = abb & bbb;
    var dbb:int = zab;
    var ebb:int = cbb;
    var fbb:int = dbb > ebb;
    var gbb:int = 1;
    var hbb:int = fbb & gbb;
    var ibb:int = 16;
    var jbb:int = hbb << ibb;
    var kbb:int = jbb >> ibb;
    var lbb:int = c[67]:int;
    var mbb:int = 16;
    var nbb:int = lbb << mbb;
    var obb:int = nbb >> mbb;
    var pbb:int = kbb + obb;
    if (eqz(pbb)) goto B_ab;
    var qbb:int = 0;
    c[20]:int = qbb;
    var rbb:int = 1;
    c[30]:int = rbb;
    var sbb:int = c[30]:int;
    var tbb:int = 11;
    var ubb:int = sbb;
    var vbb:int = tbb;
    var wbb:int = ubb < vbb;
    var xbb:int = 1;
    var ybb:int = wbb & xbb;
    if (eqz(ybb)) goto B_bb;
    var zbb:int = -1065074789;
    c[19]:int = zbb;
    var acb:int = c[64]:int;
    var bcb:int = 1;
    var ccb:int = acb + bcb;
    c[64]:int = ccb;
    var dcb:int = c[90]:int;
    var ecb:int = c[179]:ushort;
    var fcb:int = c[357]:ubyte;
    var gcb:int = c[88]:int;
    var hcb:int = c[175]:ushort;
    var icb:int = c[86]:int;
    var jcb:int = c[85]:int;
    var kcb:int = c[84]:int;
    var lcb:int = c[83]:int;
    var mcb:int = c[165]:ushort;
    var ncb:int = c[329]:ubyte;
    var ocb:int = c[328]:ubyte;
    var pcb:int = c[163]:ushort;
    var qcb:int = c[80]:int;
    var rcb:int = c[159]:ushort;
    var scb:int = c[78]:int;
    var tcb:int = c[77]:int;
    var ucb:int = c[76]:int;
    var vcb:int = c[75]:int;
    var wcb:int = c[299]:ubyte;
    var xcb:int = c[148]:ushort;
    var ycb:int = c[295]:ubyte;
    var zcb:int = c[72]:int;
    var adb:int = c[71]:int;
    var bdb:int = c[141]:ushort;
    var cdb:int = c[140]:ushort;
    var ddb:int = c[279]:ubyte;
    var edb:int = c[278]:ubyte;
    var fdb:int = c[277]:ubyte;
    var gdb:int = c[68]:int;
    var hdb:int = c[67]:int;
    var idb:int = c[66]:int;
    var jdb:int = c[263]:ubyte;
    var kdb:int = c[262]:ubyte;
    var ldb:int = c[261]:ubyte;
    var mdb:int = c[64]:int;
    var ndb:int = 16;
    var odb:int = ecb << ndb;
    var pdb:int = odb >> ndb;
    var qdb:int = 255;
    var rdb:int = fcb & qdb;
    var sdb:int = 65535;
    var tdb:int = hcb & sdb;
    var udb:int = 65535;
    var vdb:int = mcb & udb;
    var wdb:int = 255;
    var xdb:int = ncb & wdb;
    var ydb:int = 24;
    var zdb:int = ocb << ydb;
    var aeb:int = zdb >> ydb;
    var beb:int = 16;
    var ceb:int = pcb << beb;
    var deb:int = ceb >> beb;
    var eeb:int = 65535;
    var feb:int = rcb & eeb;
    var geb:int = 255;
    var heb:int = wcb & geb;
    var ieb:int = 16;
    var jeb:int = xcb << ieb;
    var keb:int = jeb >> ieb;
    var leb:int = 24;
    var meb:int = ycb << leb;
    var neb:int = meb >> leb;
    var oeb:int = 16;
    var peb:int = bdb << oeb;
    var qeb:int = peb >> oeb;
    var reb:int = 65535;
    var seb:int = cdb & reb;
    var teb:int = 24;
    var ueb:int = ddb << teb;
    var veb:int = ueb >> teb;
    var web:int = 255;
    var xeb:int = edb & web;
    var yeb:int = 255;
    var zeb:int = fdb & yeb;
    var afb:int = 24;
    var bfb:int = jdb << afb;
    var cfb:int = bfb >> afb;
    var dfb:int = 24;
    var efb:int = kdb << dfb;
    var ffb:int = efb >> dfb;
    var gfb:int = 255;
    var hfb:int = ldb & gfb;
    set_var(dcb,
            pdb,
            rdb,
            gcb,
            tdb,
            icb,
            jcb,
            kcb,
            lcb,
            vdb,
            xdb,
            aeb,
            deb,
            qcb,
            feb,
            scb,
            tcb,
            ucb,
            vcb,
            heb,
            keb,
            neb,
            zcb,
            adb,
            qeb,
            seb,
            veb,
            xeb,
            zeb,
            gdb,
            hdb,
            idb,
            cfb,
            ffb,
            hfb,
            mdb);
    var ifb:int = c[72]:int;
    c[367]:byte = ifb;
    goto B_a;
    label B_bb:
    var jfb:int = c[20]:int;
    var kfb:int = c[328]:ubyte;
    var lfb:int = 24;
    var mfb:int = kfb << lfb;
    var nfb:int = mfb >> lfb;
    var ofb:int = nfb | jfb;
    c[328]:byte = ofb;
    var pfb:int = 24;
    var qfb:int = ofb << pfb;
    var rfb:int = qfb >> pfb;
    var sfb:int = c[20]:int;
    var tfb:int = rfb;
    var ufb:int = sfb;
    var vfb:int = tfb != ufb;
    var wfb:int = 1;
    var xfb:int = 1;
    var yfb:int = vfb & xfb;
    var zfb:int = wfb;
    if (yfb) goto B_cb;
    var agb:int = c[20]:int;
    var bgb:int = 0;
    var cgb:int = agb;
    var dgb:int = bgb;
    var egb:int = cgb != dgb;
    zfb = egb;
    label B_cb:
    zfb;
    var fgb:int = c[57]:int;
    var ggb:int = 16;
    var hgb:int = fgb << ggb;
    var igb:int = hgb >> ggb;
    var jgb:int = c[57]:int;
    var kgb:int = 16;
    var lgb:int = jgb << kgb;
    var mgb:int = lgb >> kgb;
    var ngb:int = igb >> mgb;
    var ogb:int = 16;
    var pgb:int = ngb << ogb;
    var qgb:int = pgb >> ogb;
    var rgb:int = -1;
    var sgb:int = qgb + rgb;
    c[279]:byte = sgb;
    var tgb:int = c[90]:int;
    var ugb:int = c[130]:ubyte;
    var vgb:int = 255;
    var wgb:int = ugb & vgb;
    var xgb:int = tgb ^ wgb;
    var ygb:int = c[83]:int;
    var zgb:int = xgb;
    var ahb:int = ygb;
    var bhb:int = zgb != ahb;
    var chb:int = 1;
    var dhb:int = bhb & chb;
    var ehb:int = c[20]:int;
    var fhb:int = dhb;
    var ghb:int = ehb;
    var hhb:int = fhb <= ghb;
    var ihb:int = 1;
    var jhb:int = hhb & ihb;
    var khb:int = c[80]:int;
    var lhb:int = jhb | khb;
    var mhb:int = 1;
    var nhb:int = mhb;
    if (lhb) goto B_db;
    var ohb:int = 1;
    nhb = ohb;
    label B_db:
    var phb:int = nhb;
    var qhb:int = 1;
    var rhb:int = phb & qhb;
    var shb:int = c[67]:int;
    var thb:int = shb ^ rhb;
    c[67]:int = thb;
    var uhb:int = c[72]:int;
    c[20]:int = uhb;
    goto B_za;
    label B_ab:
    var vhb:int = 6;
    c[37]:short = vhb;
    var whb:int = 1;
    c[17]:int = whb;
    var xhb:int = 1205264595;
    c[16]:int = xhb;
    var yhb:int = -1;
    c[15]:int = yhb;
    var zhb:int = 21807;
    c[29]:short = zhb;
    var aib:int = c[57]:int;
    var bib:int = 378701460;
    var cib:int = aib;
    var dib:int = bib;
    var eib:int = cib == dib;
    var fib:int = 1;
    var gib:int = eib & fib;
    c[37]:short = gib;
    var hib:int = c[60]:int;
    if (eqz(hib)) goto B_eb;
    var iib:int = 4896;
    c[28]:short = iib;
    var jib:int = c[299]:ubyte;
    var kib:int = -1;
    var lib:int = jib + kib;
    c[299]:byte = lib;
    var mib:int = 255;
    var nib:int = jib & mib;
    var oib:int = 0;
    var pib:int = nib ^ oib;
    var qib:int = c[295]:ubyte;
    var rib:int = 24;
    var sib:int = qib << rib;
    var tib:int = sib >> rib;
    var uib:int = pib & tib;
    var vib:int = c[90]:int;
    var wib:int = uib;
    var xib:int = vib;
    var yib:int = wib != xib;
    var zib:int = 1;
    var ajb:int = yib & zib;
    c[72]:int = ajb;
    goto B_ya;
    label B_eb:
    var bjb:int = 1129904041;
    c[13]:int = bjb;
    var cjb:int = -388555903;
    c[12]:int = cjb;
    var djb:int = -448662282;
    c[11]:int = djb;
    var ejb:int = c[17]:int;
    var fjb:int = c[148]:ushort;
    var gjb:int = 255;
    var hjb:int = fjb & gjb;
    var ijb:int = c[57]:int;
    var jjb:int = 255;
    var kjb:int = ijb & jjb;
    var ljb:int = 206;
    var mjb:int = kjb % ljb;
    var njb:int = c[27]:int;
    var ojb:int = mjb & njb;
    var pjb:int = c[13]:int;
    var qjb:int = ojb;
    var rjb:int = pjb;
    var sjb:int = qjb != rjb;
    var tjb:int = 1;
    var ujb:int = sjb & tjb;
    var vjb:int = c[37]:ushort;
    var wjb:int = 16;
    var xjb:int = vjb << wjb;
    var yjb:int = xjb >> wjb;
    var zjb:int = ujb;
    var akb:int = yjb;
    var bkb:int = zjb > akb;
    var ckb:int = 1;
    var dkb:int = bkb & ckb;
    var ekb:int = 24;
    var fkb:int = dkb << ekb;
    var gkb:int = fkb >> ekb;
    var hkb:int = c[83]:int;
    var ikb:int = 24;
    var jkb:int = hkb << ikb;
    var kkb:int = jkb >> ikb;
    var lkb:int = gkb + kkb;
    var mkb:int = 255;
    var nkb:int = lkb & mkb;
    var okb:int = hjb * nkb;
    c[16]:int = okb;
    var pkb:int = 255;
    var qkb:int = okb & pkb;
    var rkb:int = c[17]:int;
    var skb:int = 255;
    var tkb:int = rkb & skb;
    var ukb:int = qkb - tkb;
    var vkb:int = 16;
    var wkb:int = ukb << vkb;
    var xkb:int = wkb >> vkb;
    var ykb:int = c[148]:ushort;
    var zkb:int = 16;
    var alb:int = ykb << zkb;
    var blb:int = alb >> zkb;
    var clb:int = xkb / blb;
    c[15]:int = clb;
    var dlb:int = c[277]:ubyte;
    var elb:int = 24;
    var flb:int = dlb << elb;
    var glb:int = flb >> elb;
    var hlb:int = -51;
    var ilb:int = glb % hlb;
    var jlb:int = ejb;
    var klb:int = ilb;
    var llb:int = jlb >= klb;
    var mlb:int = 1;
    var nlb:int = llb & mlb;
    var olb:int = 255;
    var plb:int = nlb & olb;
    var qlb:int = c[175]:ushort;
    var rlb:int = 255;
    var slb:int = qlb & rlb;
    var tlb:int = plb - slb;
    var ulb:int = c[328]:ubyte;
    var vlb:int = 24;
    var wlb:int = ulb << vlb;
    var xlb:int = wlb >> vlb;
    var ylb:int = tlb;
    var zlb:int = xlb;
    var amb:int = ylb < zlb;
    var bmb:int = 1;
    var cmb:int = amb & bmb;
    var dmb:int = 16;
    var emb:int = cmb << dmb;
    var fmb:int = emb >> dmb;
    var gmb:int = c[76]:int;
    var hmb:int = 16;
    var imb:int = gmb << hmb;
    var jmb:int = imb >> hmb;
    var kmb:int = fmb * jmb;
    var lmb:int = 159;
    var mmb:int = kmb | lmb;
    var nmb:int = 65535;
    var omb:int = mmb & nmb;
    var pmb:int = 8;
    var qmb:int = omb >> pmb;
    if (eqz(qmb)) goto B_gb;
    var rmb:int = 65535;
    c[21]:short = rmb;
    var smb:int = -10;
    c[9]:int = smb;
    var tmb:int = 1486585459;
    c[8]:int = tmb;
    var umb:int = c[21]:ushort;
    var vmb:int = 16;
    var wmb:int = umb << vmb;
    var xmb:int = wmb >> vmb;
    var ymb:int = c[9]:int;
    var zmb:int = c[263]:ubyte;
    var anb:int = 24;
    var bnb:int = zmb << anb;
    var cnb:int = bnb >> anb;
    var dnb:int = 511;
    var enb:int = dnb;
    var fnb:int = cnb;
    var gnb:int = enb < fnb;
    var hnb:int = 1;
    var inb:int = gnb & hnb;
    var jnb:int = 65535;
    var knb:int = inb & jnb;
    var lnb:int = 12;
    var mnb:int = knb >> lnb;
    var nnb:int = c[141]:ushort;
    var onb:int = 16;
    var pnb:int = nnb << onb;
    var qnb:int = pnb >> onb;
    var rnb:int = qnb & mnb;
    c[141]:short = rnb;
    var snb:int = 16;
    var tnb:int = rnb << snb;
    var unb:int = tnb >> snb;
    var vnb:int = 0;
    var wnb:int = vnb;
    if (eqz(unb)) goto B_hb;
    var xnb:int = c[261]:ubyte;
    var ynb:int = 255;
    var znb:int = xnb & ynb;
    var aob:int = 0;
    var bob:int = znb;
    var cob:int = aob;
    var dob:int = bob != cob;
    wnb = dob;
    label B_hb:
    wnb;
    var eob:int = c[80]:int;
    var fob:int = ymb & eob;
    var gob:int = 1;
    var hob:int = gob;
    if (fob) goto B_ib;
    var iob:int = c[16]:int;
    var job:int = 0;
    var kob:int = iob;
    var lob:int = job;
    var mob:int = kob != lob;
    hob = mob;
    label B_ib:
    hob;
    var nob:int = c[29]:ushort;
    var oob:int = 16;
    var pob:int = nob << oob;
    var qob:int = pob >> oob;
    var rob:int = xmb % qob;
    var sob:int = c[86]:int;
    var tob:int = rob;
    var uob:int = sob;
    var vob:int = tob == uob;
    var wob:int = 1;
    var xob:int = vob & wob;
    if (eqz(xob)) goto B_kb;
    var yob:int = 0;
    c[15]:short = yob;
    var zob:int = c[17]:int;
    var apb:int = c[357]:ubyte;
    var bpb:int = 255;
    var cpb:int = apb & bpb;
    var dpb:int = c[277]:ubyte;
    var epb:int = 255;
    var fpb:int = dpb & epb;
    var gpb:int = 1;
    var hpb:int = gpb;
    if (fpb) goto B_lb;
    var ipb:int = c[90]:int;
    var jpb:int = 0;
    var kpb:int = ipb;
    var lpb:int = jpb;
    var mpb:int = kpb != lpb;
    hpb = mpb;
    label B_lb:
    var npb:int = hpb;
    var opb:int = 1;
    var ppb:int = npb & opb;
    var qpb:int = cpb - ppb;
    var rpb:int = 1;
    var spb:int = qpb;
    var tpb:int = rpb;
    var upb:int = spb >= tpb;
    var vpb:int = 1;
    var wpb:int = upb & vpb;
    var xpb:int = c[78]:int;
    var ypb:int = wpb;
    var zpb:int = xpb;
    var aqb:int = ypb > zpb;
    var bqb:int = 1;
    var cqb:int = aqb & bqb;
    var dqb:int = zob | cqb;
    var eqb:int = c[148]:ushort;
    var fqb:int = 16;
    var gqb:int = eqb << fqb;
    var hqb:int = gqb >> fqb;
    var iqb:int = dqb;
    var jqb:int = hqb;
    var kqb:int = iqb >= jqb;
    var lqb:int = 1;
    var mqb:int = kqb & lqb;
    var nqb:int = c[175]:ushort;
    var oqb:int = 65535;
    var pqb:int = nqb & oqb;
    var qqb:int = mqb & pqb;
    var rqb:int = 255;
    var sqb:int = qqb & rqb;
    var tqb:int = c[75]:int;
    var uqb:int = 255;
    var vqb:int = tqb & uqb;
    var wqb:int = sqb - vqb;
    var xqb:int = 0;
    var yqb:int = xqb;
    var zqb:int = wqb;
    var arb:int = yqb > zqb;
    var brb:int = 1;
    var crb:int = arb & brb;
    var drb:int = 1;
    var erb:int = crb ^ drb;
    var frb:int = c[76]:int;
    var grb:int = erb;
    var hrb:int = frb;
    var irb:int = grb >= hrb;
    var jrb:int = 1;
    var krb:int = irb & jrb;
    var lrb:int = c[27]:int;
    var mrb:int = lrb & krb;
    c[27]:int = mrb;
    goto B_jb;
    label B_kb:
    var nrb:int = 6;
    c[6]:int = nrb;
    var orb:int = c[148]:ushort;
    var prb:int = 255;
    var qrb:int = orb & prb;
    var rrb:int = 115;
    var srb:int = qrb * rrb;
    var trb:int = 0;
    var urb:int = trb;
    if (eqz(srb)) goto B_mb;
    var vrb:int = c[13]:int;
    var wrb:int = -2145407684;
    var xrb:int = vrb + wrb;
    var yrb:int = 255;
    var zrb:int = xrb & yrb;
    var asb:int = 2;
    var bsb:int = zrb << asb;
    var csb:int = 0;
    urb = csb;
    if (eqz(bsb)) goto B_mb;
    var dsb:int = c[295]:ubyte;
    var esb:int = 24;
    var fsb:int = dsb << esb;
    var gsb:int = fsb >> esb;
    var hsb:int = 0;
    urb = hsb;
    if (eqz(gsb)) goto B_mb;
    var isb:int = 1;
    urb = isb;
    label B_mb:
    var jsb:int = urb;
    var ksb:int = 1;
    var lsb:int = jsb & ksb;
    var msb:int = 255;
    var nsb:int = lsb & msb;
    var osb:int = 1;
    var psb:int = nsb >> osb;
    var qsb:int = 0;
    var rsb:int = qsb - psb;
    var ssb:int = 0;
    var tsb:int = ssb;
    if (eqz(rsb)) goto B_nb;
    var usb:int = c[77]:int;
    var vsb:int = 0;
    var wsb:int = usb;
    var xsb:int = vsb;
    var ysb:int = wsb != xsb;
    tsb = ysb;
    label B_nb:
    tsb;
    var zsb:int = 1826169590;
    c[6]:int = zsb;
    var atb:int = c[67]:int;
    var btb:int = c[31]:int;
    var ctb:int = c[76]:int;
    var dtb:int = btb;
    var etb:int = ctb;
    var ftb:int = dtb < etb;
    var gtb:int = 1;
    var htb:int = ftb & gtb;
    var itb:int = 16;
    var jtb:int = htb << itb;
    var ktb:int = jtb >> itb;
    var ltb:int = c[15]:int;
    var mtb:int = c[13]:int;
    var ntb:int = ltb;
    var otb:int = mtb;
    var ptb:int = ntb < otb;
    var qtb:int = 1;
    var rtb:int = ptb & qtb;
    var stb:int = c[59]:int;
    var ttb:int = rtb - stb;
    var utb:int = 16;
    var vtb:int = ttb << utb;
    var wtb:int = vtb >> utb;
    var xtb:int = ktb * wtb;
    var ytb:int = 0;
    var ztb:int = ytb;
    if (eqz(xtb)) goto B_ob;
    var aub:int = c[6]:int;
    var bub:int = 0;
    var cub:int = aub;
    var dub:int = bub;
    var eub:int = cub != dub;
    ztb = eub;
    label B_ob:
    var fub:int = ztb;
    var gub:int = 1;
    var hub:int = fub & gub;
    var iub:int = 108;
    var jub:int = hub;
    var kub:int = iub;
    var lub:int = jub > kub;
    var mub:int = 1;
    var nub:int = 1;
    var oub:int = lub & nub;
    var pub:int = mub;
    if (oub) goto B_pb;
    var qub:int = c[299]:ubyte;
    var rub:int = 255;
    var sub:int = qub & rub;
    var tub:int = 0;
    var uub:int = sub;
    var vub:int = tub;
    var wub:int = uub != vub;
    pub = wub;
    label B_pb:
    var xub:int = pub;
    var yub:int = 1;
    var zub:int = xub & yub;
    var avb:int = 0;
    var bvb:int = zub;
    var cvb:int = avb;
    var dvb:int = bvb < cvb;
    var evb:int = 1;
    var fvb:int = dvb & evb;
    var gvb:int = atb | fvb;
    c[67]:int = gvb;
    c[30]:int = gvb;
    var hvb:int = c[27]:int;
    if (eqz(hvb)) goto B_qb;
    goto B_pa;
    label B_qb:
    var ivb:int = c[25]:int;
    var jvb:int = c[16]:int;
    var kvb:int = jvb | ivb;
    c[16]:int = kvb;
    label B_jb:
    var lvb:int = 0;
    c[25]:int = lvb;
    loop L_sb {
      var mvb:int = c[25]:int;
      var nvb:int = -22;
      var ovb:int = mvb;
      var pvb:int = nvb;
      var qvb:int = ovb > pvb;
      var rvb:int = 1;
      var svb:int = qvb & rvb;
      if (eqz(svb)) goto B_rb;
      var tvb:int = 73;
      c[23]:byte = tvb;
      var uvb:int = c[23]:ubyte;
      var vvb:int = 24;
      var wvb:int = uvb << vvb;
      var xvb:int = wvb >> vvb;
      var yvb:int = c[12]:int;
      var zvb:int = yvb | xvb;
      c[12]:int = zvb;
      var awb:int = c[23]:ubyte;
      var bwb:int = 24;
      var cwb:int = awb << bwb;
      var dwb:int = cwb >> bwb;
      var ewb:int = 1;
      var fwb:int = ewb;
      if (dwb) goto B_tb;
      var gwb:int = 1;
      fwb = gwb;
      label B_tb:
      var hwb:int = fwb;
      var iwb:int = 1;
      var jwb:int = hwb & iwb;
      var kwb:int = 65535;
      var lwb:int = jwb & kwb;
      var mwb:int = c[141]:ushort;
      var nwb:int = 65535;
      var owb:int = mwb & nwb;
      var pwb:int = lwb / owb;
      var qwb:int = -7;
      var rwb:int = pwb;
      var swb:int = qwb;
      var twb:int = rwb > swb;
      var uwb:int = 0;
      var vwb:int = 1;
      var wwb:int = twb & vwb;
      var xwb:int = uwb;
      if (eqz(wwb)) goto B_ub;
      var ywb:int = 1;
      xwb = ywb;
      label B_ub:
      xwb;
      var zwb:int = c[12]:int;
      var axb:int = c[23]:ubyte;
      var bxb:int = 24;
      var cxb:int = axb << bxb;
      var dxb:int = cxb >> bxb;
      var exb:int = zwb;
      var fxb:int = dxb;
      var gxb:int = exb <= fxb;
      var hxb:int = -1;
      var ixb:int = gxb ^ hxb;
      var jxb:int = 1;
      var kxb:int = ixb & jxb;
      var lxb:int = -6;
      var mxb:int = kxb & lxb;
      var nxb:int = c[278]:ubyte;
      var oxb:int = 255;
      var pxb:int = nxb & oxb;
      var qxb:int = mxb - pxb;
      var rxb:int = 158;
      var sxb:int = qxb ^ rxb;
      var txb:int = c[159]:ushort;
      var uxb:int = 65535;
      var vxb:int = txb & uxb;
      var wxb:int = vxb ^ sxb;
      c[159]:short = wxb;
      var xxb:int = 65535;
      var yxb:int = wxb & xxb;
      var zxb:int = 65528;
      var ayb:int = yxb | zxb;
      var byb:int = 1;
      var cyb:int = byb;
      if (ayb) goto B_vb;
      var dyb:int = 1;
      cyb = dyb;
      label B_vb:
      var eyb:int = cyb;
      var fyb:int = 1;
      var gyb:int = eyb & fyb;
      var hyb:int = c[67]:int;
      var iyb:int = hyb ^ gyb;
      c[67]:int = iyb;
      var jyb:int = c[261]:ubyte;
      var kyb:int = 0;
      var lyb:int = 255;
      var myb:int = jyb & lyb;
      var nyb:int = 255;
      var oyb:int = kyb & nyb;
      var pyb:int = myb != oyb;
      var qyb:int = 1;
      var ryb:int = pyb & qyb;
      if (eqz(ryb)) goto B_wb;
      goto B_rb;
      label B_wb:
      var syb:int = c[25]:int;
      var tyb:int = -1;
      var uyb:int = syb + tyb;
      c[25]:int = uyb;
      continue L_sb;
    }
    unreachable;
    label B_rb:
    goto B_fb;
    label B_gb:
    var vyb:int = -1692019573;
    c[4]:int = vyb;
    var wyb:int = 129;
    c[4]:int = wyb;
    var xyb:int = c[31]:int;
    var yyb:int = c[11]:int;
    var zyb:int = xyb | yyb;
    c[68]:int = zyb;
    var azb:int = 0;
    c[279]:byte = azb;
    loop L_yb {
      var bzb:int = c[279]:ubyte;
      var czb:int = 24;
      var dzb:int = bzb << czb;
      var ezb:int = dzb >> czb;
      var fzb:int = 27;
      var gzb:int = ezb;
      var hzb:int = fzb;
      var izb:int = gzb != hzb;
      var jzb:int = 1;
      var kzb:int = izb & jzb;
      if (eqz(kzb)) goto B_xb;
      var lzb:int = 65530;
      c[7]:short = lzb;
      var mzb:int = c[72]:int;
      var nzb:int = -1854648593;
      var ozb:int = mzb ^ nzb;
      c[72]:int = ozb;
      var pzb:int = c[66]:int;
      var qzb:int = c[67]:int;
      var rzb:int = qzb & pzb;
      c[67]:int = rzb;
      var szb:int = c[4]:int;
      if (eqz(szb)) goto B_ac;
      goto B_zb;
      label B_ac:
      var tzb:int = c[7]:ushort;
      var uzb:int = 65535;
      var vzb:int = tzb & uzb;
      var wzb:int = c[278]:ubyte;
      var xzb:int = 255;
      var yzb:int = wzb & xzb;
      var zzb:int = -1;
      var aac:int = yzb ^ zzb;
      var bac:int = 255;
      var cac:int = aac & bac;
      var dac:int = 7;
      var eac:int = cac * dac;
      var fac:int = c[64]:int;
      var gac:int = 255;
      var hac:int = fac & gac;
      var iac:int = 34;
      var jac:int = hac + iac;
      var kac:int = -1;
      var lac:int = jac ^ kac;
      var mac:int = c[37]:ushort;
      var nac:int = 16;
      var oac:int = mac << nac;
      var pac:int = oac >> nac;
      var qac:int = lac;
      var rac:int = pac;
      var sac:int = qac <= rac;
      var tac:int = 1;
      var uac:int = sac & tac;
      var vac:int = 1;
      var wac:int = uac;
      var xac:int = vac;
      var yac:int = wac < xac;
      var zac:int = 1;
      var abc:int = yac & zac;
      var bbc:int = 255;
      var cbc:int = abc & bbc;
      var dbc:int = c[30]:int;
      var ebc:int = 255;
      var fbc:int = dbc & ebc;
      var gbc:int = cbc + fbc;
      var hbc:int = eac % gbc;
      var ibc:int = 255;
      var jbc:int = hbc & ibc;
      var kbc:int = 2;
      var lbc:int = jbc - kbc;
      var mbc:int = 24;
      var nbc:int = lbc << mbc;
      var obc:int = nbc >> mbc;
      var pbc:int = 3;
      var qbc:int = obc >> pbc;
      var rbc:int = vzb;
      var sbc:int = qbc;
      var tbc:int = rbc <= sbc;
      var ubc:int = 1;
      var vbc:int = tbc & ubc;
      c[59]:int = vbc;
      label B_zb:
      var wbc:int = c[279]:ubyte;
      var xbc:int = 24;
      var ybc:int = wbc << xbc;
      var zbc:int = ybc >> xbc;
      var acc:int = 3;
      var bcc:int = zbc + acc;
      c[279]:byte = bcc;
      continue L_yb;
    }
    unreachable;
    label B_xb:
    label B_fb:
    var ccc:int = 7;
    c[80]:int = ccc;
    loop L_cc {
      var dcc:int = c[80]:int;
      var ecc:int = -14;
      var fcc:int = dcc;
      var gcc:int = ecc;
      var hcc:int = fcc == gcc;
      var icc:int = 1;
      var jcc:int = hcc & icc;
      if (eqz(jcc)) goto B_bc;
      var kcc:int = -1;
      c[2]:int = kcc;
      var lcc:int = -1201352191;
      c[1]:int = lcc;
      var mcc:int = 249;
      c[3]:byte = mcc;
      var ncc:int = 26;
      c[75]:int = ncc;
      loop L_ec {
        var occ:int = c[75]:int;
        var pcc:int = 7;
        var qcc:int = occ;
        var rcc:int = pcc;
        var scc:int = qcc == rcc;
        var tcc:int = 1;
        var ucc:int = scc & tcc;
        if (eqz(ucc)) goto B_dc;
        var vcc:int = c[75]:int;
        if (eqz(vcc)) goto B_fc;
        goto B_dc;
        label B_fc:
        var wcc:int = c[75]:int;
        var xcc:int = -1;
        var ycc:int = wcc + xcc;
        c[75]:int = ycc;
        continue L_ec;
      }
      unreachable;
      label B_dc:
      var zcc:int = c[175]:ushort;
      var adc:int = 65535;
      var bdc:int = zcc & adc;
      var cdc:int = c[165]:ushort;
      var ddc:int = 65535;
      var edc:int = cdc & ddc;
      var fdc:int = c[148]:ushort;
      var gdc:int = 16;
      var hdc:int = fdc << gdc;
      var idc:int = hdc >> gdc;
      var jdc:int = c[86]:int;
      var kdc:int = 16;
      var ldc:int = jdc << kdc;
      var mdc:int = ldc >> kdc;
      var ndc:int = idc << mdc;
      var odc:int = -5;
      var pdc:int = ndc;
      var qdc:int = odc;
      var rdc:int = pdc < qdc;
      var sdc:int = 1;
      var tdc:int = rdc & sdc;
      var udc:int = 16;
      var vdc:int = tdc << udc;
      var wdc:int = vdc >> udc;
      var xdc:int = -10974;
      var ydc:int = xdc >> wdc;
      var zdc:int = c[279]:ubyte;
      var aec:int = 24;
      var bec:int = zdc << aec;
      var cec:int = bec >> aec;
      var dec:int = cec ^ ydc;
      c[279]:byte = dec;
      var eec:int = 24;
      var fec:int = dec << eec;
      var gec:int = fec >> eec;
      var hec:int = 1;
      var iec:int = hec;
      if (gec) goto B_gc;
      var jec:int = c[299]:ubyte;
      var kec:int = 255;
      var lec:int = jec & kec;
      var mec:int = 0;
      var nec:int = lec;
      var oec:int = mec;
      var pec:int = nec != oec;
      iec = pec;
      label B_gc:
      var qec:int = iec;
      var rec:int = 1;
      var sec:int = qec & rec;
      var tec:int = c[15]:int;
      var uec:int = tec & sec;
      c[15]:int = uec;
      var vec:int = 65535;
      var wec:int = uec & vec;
      var xec:int = edc - wec;
      var yec:int = 1;
      var zec:int = yec;
      if (xec) goto B_hc;
      var afc:int = c[55]:int;
      var bfc:int = 0;
      var cfc:int = afc;
      var dfc:int = bfc;
      var efc:int = cfc != dfc;
      zec = efc;
      label B_hc:
      var ffc:int = zec;
      var gfc:int = 1;
      var hfc:int = ffc & gfc;
      var ifc:int = -1;
      var jfc:int = hfc ^ ifc;
      var kfc:int = c[1]:int;
      var lfc:int = kfc & jfc;
      c[1]:int = lfc;
      var mfc:int = c[3]:ubyte;
      var nfc:int = 24;
      var ofc:int = mfc << nfc;
      var pfc:int = ofc >> nfc;
      var qfc:int = lfc | pfc;
      var rfc:int = bdc & qfc;
      var sfc:int = 65535;
      var tfc:int = rfc & sfc;
      var ufc:int = 0;
      var vfc:int = tfc - ufc;
      var wfc:int = c[278]:ubyte;
      var xfc:int = 255;
      var yfc:int = wfc & xfc;
      var zfc:int = vfc - yfc;
      c[27]:int = zfc;
      var agc:int = c[80]:int;
      var bgc:int = -1;
      var cgc:int = agc + bgc;
      c[80]:int = cgc;
      continue L_cc;
    }
    unreachable;
    label B_bc:
    label B_za:
    label B_ya:
    var dgc:int = c[179]:ushort;
    var egc:int = -1;
    var fgc:int = dgc + egc;
    c[179]:short = fgc;
    continue L_qa;
  }
  unreachable;
  label B_pa:
  var ggc:int = c[295]:ubyte;
  var hgc:int = 24;
  var igc:int = ggc << hgc;
  var jgc:int = igc >> hgc;
  var kgc:int = 1;
  var lgc:int = jgc >> kgc;
  var mgc:int = 0;
  var ngc:int = mgc;
  var ogc:int = lgc;
  var pgc:int = ngc >= ogc;
  var qgc:int = 1;
  var rgc:int = pgc & qgc;
  var sgc:int = c[84]:int;
  var tgc:int = 24;
  var ugc:int = sgc << tgc;
  var vgc:int = ugc >> tgc;
  var wgc:int = c[261]:ubyte;
  var xgc:int = 24;
  var ygc:int = wgc << xgc;
  var zgc:int = ygc >> xgc;
  var ahc:int = vgc << zgc;
  var bhc:int = c[163]:ushort;
  var chc:int = 16;
  var dhc:int = bhc << chc;
  var ehc:int = dhc >> chc;
  var fhc:int = ahc;
  var ghc:int = ehc;
  var hhc:int = fhc >= ghc;
  var ihc:int = 1;
  var jhc:int = hhc & ihc;
  var khc:int = -1273176340;
  var lhc:int = khc;
  var mhc:int = jhc;
  var nhc:int = lhc > mhc;
  var ohc:int = 0;
  var phc:int = 1;
  var qhc:int = nhc & phc;
  var rhc:int = ohc;
  if (eqz(qhc)) goto B_ic;
  var shc:int = c[59]:int;
  var thc:int = 0;
  var uhc:int = shc;
  var vhc:int = thc;
  var whc:int = uhc != vhc;
  rhc = whc;
  label B_ic:
  var xhc:int = rhc;
  var yhc:int = 1;
  var zhc:int = xhc & yhc;
  var aic:int = rgc;
  var bic:int = zhc;
  var cic:int = aic != bic;
  var dic:int = 1;
  var eic:int = cic & dic;
  var fic:int = c[357]:ubyte;
  var gic:int = 255;
  var hic:int = fic & gic;
  var iic:int = eic;
  var jic:int = hic;
  var kic:int = iic < jic;
  var lic:int = 1;
  var mic:int = kic & lic;
  var nic:int = c[109]:ushort;
  var oic:int = 65535;
  var pic:int = nic & oic;
  var qic:int = mic;
  var ric:int = pic;
  var sic:int = qic != ric;
  var tic:int = 1;
  var uic:int = sic & tic;
  var vic:int = 29;
  var wic:int = uic;
  var xic:int = vic;
  var yic:int = wic == xic;
  var zic:int = 1;
  var ajc:int = yic & zic;
  c[56]:int = ajc;
  var bjc:int = c[90]:int;
  var cjc:int = c[179]:ushort;
  var djc:int = c[357]:ubyte;
  var ejc:int = c[88]:int;
  var fjc:int = c[175]:ushort;
  var gjc:int = c[86]:int;
  var hjc:int = c[85]:int;
  var ijc:int = c[84]:int;
  var jjc:int = c[83]:int;
  var kjc:int = c[165]:ushort;
  var ljc:int = c[329]:ubyte;
  var mjc:int = c[328]:ubyte;
  var njc:int = c[163]:ushort;
  var ojc:int = c[80]:int;
  var pjc:int = c[159]:ushort;
  var qjc:int = c[78]:int;
  var rjc:int = c[77]:int;
  var sjc:int = c[76]:int;
  var tjc:int = c[75]:int;
  var ujc:int = c[299]:ubyte;
  var vjc:int = c[148]:ushort;
  var wjc:int = c[295]:ubyte;
  var xjc:int = c[72]:int;
  var yjc:int = c[71]:int;
  var zjc:int = c[141]:ushort;
  var akc:int = c[140]:ushort;
  var bkc:int = c[279]:ubyte;
  var ckc:int = c[278]:ubyte;
  var dkc:int = c[277]:ubyte;
  var ekc:int = c[68]:int;
  var fkc:int = c[67]:int;
  var gkc:int = c[66]:int;
  var hkc:int = c[263]:ubyte;
  var ikc:int = c[262]:ubyte;
  var jkc:int = c[261]:ubyte;
  var kkc:int = c[64]:int;
  var lkc:int = 16;
  var mkc:int = cjc << lkc;
  var nkc:int = mkc >> lkc;
  var okc:int = 255;
  var pkc:int = djc & okc;
  var qkc:int = 65535;
  var rkc:int = fjc & qkc;
  var skc:int = 65535;
  var tkc:int = kjc & skc;
  var ukc:int = 255;
  var vkc:int = ljc & ukc;
  var wkc:int = 24;
  var xkc:int = mjc << wkc;
  var ykc:int = xkc >> wkc;
  var zkc:int = 16;
  var alc:int = njc << zkc;
  var blc:int = alc >> zkc;
  var clc:int = 65535;
  var dlc:int = pjc & clc;
  var elc:int = 255;
  var flc:int = ujc & elc;
  var glc:int = 16;
  var hlc:int = vjc << glc;
  var ilc:int = hlc >> glc;
  var jlc:int = 24;
  var klc:int = wjc << jlc;
  var llc:int = klc >> jlc;
  var mlc:int = 16;
  var nlc:int = zjc << mlc;
  var olc:int = nlc >> mlc;
  var plc:int = 65535;
  var qlc:int = akc & plc;
  var rlc:int = 24;
  var slc:int = bkc << rlc;
  var tlc:int = slc >> rlc;
  var ulc:int = 255;
  var vlc:int = ckc & ulc;
  var wlc:int = 255;
  var xlc:int = dkc & wlc;
  var ylc:int = 24;
  var zlc:int = hkc << ylc;
  var amc:int = zlc >> ylc;
  var bmc:int = 24;
  var cmc:int = ikc << bmc;
  var dmc:int = cmc >> bmc;
  var emc:int = 255;
  var fmc:int = jkc & emc;
  set_var(bjc,
          nkc,
          pkc,
          ejc,
          rkc,
          gjc,
          hjc,
          ijc,
          jjc,
          tkc,
          vkc,
          ykc,
          blc,
          ojc,
          dlc,
          qjc,
          rjc,
          sjc,
          tjc,
          flc,
          ilc,
          llc,
          xjc,
          yjc,
          olc,
          qlc,
          tlc,
          vlc,
          xlc,
          ekc,
          fkc,
          gkc,
          amc,
          dmc,
          fmc,
          kkc);
  var gmc:int = c[88]:int;
  c[367]:byte = gmc;
  label B_a:
  var hmc:int = c[367]:ubyte;
  var imc:int = 24;
  var jmc:int = hmc << imc;
  var kmc:int = jmc >> imc;
  var lmc:int = 368;
  var mmc:int = c + lmc;
  stack_pointer = mmc;
  return kmc;
}

function set_var(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int, y:int, z:int, aa:int, ba:int, ca:int, da:int, ea:int, fa:int, ga:int, ha:int, ia:int, ja:int):int {
  var ka:int = stack_pointer;
  var la:int = 112;
  var ma:int = ka - la;
  ma[27]:int = a;
  ma[53]:short = b;
  ma[105]:byte = c;
  ma[25]:int = d;
  ma[49]:short = e;
  ma[23]:int = f;
  ma[22]:int = g;
  ma[21]:int = h;
  ma[20]:int = i;
  ma[39]:short = j;
  ma[77]:byte = k;
  ma[76]:byte = l;
  ma[37]:short = m;
  ma[17]:int = n;
  ma[33]:short = o;
  ma[15]:int = p;
  ma[14]:int = q;
  ma[13]:int = r;
  ma[12]:int = s;
  ma[47]:byte = t;
  ma[22]:short = u;
  ma[43]:byte = v;
  ma[9]:int = w;
  ma[8]:int = x;
  ma[15]:short = y;
  ma[14]:short = z;
  ma[27]:byte = aa;
  ma[26]:byte = ba;
  ma[25]:byte = ca;
  ma[5]:int = da;
  ma[4]:int = ea;
  ma[3]:int = fa;
  ma[11]:byte = ga;
  ma[10]:byte = ha;
  ma[9]:byte = ia;
  ma[1]:int = ja;
  var na:int = ma[27]:int;
  var oa:int = 256;
  var pa:int = memory_base;
  var qa:int_ptr = pa + oa;
  qa[0] = na;
  var ra:int = ma[53]:ushort;
  var sa:int = 260;
  var ta:short_ptr = pa + sa;
  ta[0] = ra;
  var ua:int = ma[105]:ubyte;
  var va:int = 262;
  var wa:byte_ptr = pa + va;
  wa[0] = ua;
  var xa:int = ma[25]:int;
  var ya:int = 264;
  var za:int_ptr = pa + ya;
  za[0] = xa;
  var ab:int = ma[49]:ushort;
  var bb:int = 268;
  var cb:short_ptr = pa + bb;
  cb[0] = ab;
  var db:int = ma[23]:int;
  var eb:int = 272;
  var fb:int_ptr = pa + eb;
  fb[0] = db;
  var gb:int = ma[22]:int;
  var hb:int = 276;
  var ib:int_ptr = pa + hb;
  ib[0] = gb;
  var jb:int = ma[21]:int;
  var kb:int = 280;
  var lb:int_ptr = pa + kb;
  lb[0] = jb;
  var mb:int = ma[20]:int;
  var nb:int = 284;
  var ob:int_ptr = pa + nb;
  ob[0] = mb;
  var pb:int = ma[39]:ushort;
  var qb:int = 288;
  var rb:short_ptr = pa + qb;
  rb[0] = pb;
  var sb:int = ma[77]:ubyte;
  var tb:int = 290;
  var ub:byte_ptr = pa + tb;
  ub[0] = sb;
  var vb:int = ma[76]:ubyte;
  var wb:int = 291;
  var xb:byte_ptr = pa + wb;
  xb[0] = vb;
  var yb:int = ma[37]:ushort;
  var zb:int = 292;
  var ac:short_ptr = pa + zb;
  ac[0] = yb;
  var bc:int = ma[17]:int;
  var cc:int = 296;
  var dc:int_ptr = pa + cc;
  dc[0] = bc;
  var ec:int = ma[33]:ushort;
  var fc:int = 300;
  var gc:short_ptr = pa + fc;
  gc[0] = ec;
  var hc:int = ma[15]:int;
  var ic:int = 304;
  var jc:int_ptr = pa + ic;
  jc[0] = hc;
  var kc:int = ma[14]:int;
  var lc:int = 308;
  var mc:int_ptr = pa + lc;
  mc[0] = kc;
  var nc:int = ma[13]:int;
  var oc:int = 312;
  var pc:int_ptr = pa + oc;
  pc[0] = nc;
  var qc:int = ma[12]:int;
  var rc:int = 316;
  var sc:int_ptr = pa + rc;
  sc[0] = qc;
  var tc:int = ma[47]:ubyte;
  var uc:int = 320;
  var vc:byte_ptr = pa + uc;
  vc[0] = tc;
  var wc:int = ma[22]:ushort;
  var xc:int = 322;
  var yc:short_ptr = pa + xc;
  yc[0] = wc;
  var zc:int = ma[43]:ubyte;
  var ad:int = 324;
  var bd:byte_ptr = pa + ad;
  bd[0] = zc;
  var cd:int = ma[9]:int;
  var dd:int = 328;
  var ed:int_ptr = pa + dd;
  ed[0] = cd;
  var fd:int = ma[8]:int;
  var gd:int = 332;
  var hd:int_ptr = pa + gd;
  hd[0] = fd;
  var id:int = ma[15]:ushort;
  var jd:int = 336;
  var kd:short_ptr = pa + jd;
  kd[0] = id;
  var ld:int = ma[14]:ushort;
  var md:int = 338;
  var nd:short_ptr = pa + md;
  nd[0] = ld;
  var od:int = ma[27]:ubyte;
  var pd:int = 340;
  var qd:byte_ptr = pa + pd;
  qd[0] = od;
  var rd:int = ma[26]:ubyte;
  var sd:int = 341;
  var td:byte_ptr = pa + sd;
  td[0] = rd;
  var ud:int = ma[25]:ubyte;
  var vd:int = 342;
  var wd:byte_ptr = pa + vd;
  wd[0] = ud;
  var xd:int = ma[5]:int;
  var yd:int = 344;
  var zd:int_ptr = pa + yd;
  zd[0] = xd;
  var ae:int = ma[4]:int;
  var be:int = 348;
  var ce:int_ptr = pa + be;
  ce[0] = ae;
  var de:int = ma[3]:int;
  var ee:int = 352;
  var fe:int_ptr = pa + ee;
  fe[0] = de;
  var ge:int = ma[11]:ubyte;
  var he:int = 356;
  var ie:byte_ptr = pa + he;
  ie[0] = ge;
  var je:int = ma[10]:ubyte;
  var ke:int = 357;
  var le:byte_ptr = pa + ke;
  le[0] = je;
  var me:int = ma[9]:ubyte;
  var ne:int = 358;
  var oe:byte_ptr = pa + ne;
  oe[0] = me;
  var pe:int = ma[1]:int;
  var qe:int = 368;
  var re:int_ptr = pa + qe;
  re[0] = pe;
  var se:int = 0;
  return se;
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
  var q:int = 186;
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
  var v:int = 256;
  var w:int = memory_base;
  var x:int_ptr = w + v;
  var y:int = x[0];
  var z:int = e.a;
  var aa:int = 171;
  var ba:int = w + aa;
  transparent_crc(y, ba, z);
  var ca:int = 260;
  var da:short_ptr = w + ca;
  var ea:int = da[0];
  var fa:int = e.a;
  var ga:int = 160;
  var ha:int = w + ga;
  transparent_crc(ea, ha, fa);
  var ia:int = 262;
  var ja:ubyte_ptr = w + ia;
  var ka:int = ja[0];
  var la:int = e.a;
  var ma:int = 149;
  var na:int = w + ma;
  transparent_crc(ka, na, la);
  var oa:int = 264;
  var pa:int_ptr = w + oa;
  var qa:int = pa[0];
  var ra:int = e.a;
  var sa:int = 121;
  var ta:int = w + sa;
  transparent_crc(qa, ta, ra);
  var ua:int = 268;
  var va:ushort_ptr = w + ua;
  var wa:int = va[0];
  var xa:int = e.a;
  var ya:int = 58;
  var za:int = w + ya;
  transparent_crc(wa, za, xa);
  var ab:int = 272;
  var bb:int_ptr = w + ab;
  var cb:int = bb[0];
  var db:int = e.a;
  var eb:int = 110;
  var fb:int = w + eb;
  transparent_crc(cb, fb, db);
  var gb:int = 276;
  var hb:int_ptr = w + gb;
  var ib:int = hb[0];
  var jb:int = e.a;
  var kb:int = 81;
  var lb:int = w + kb;
  transparent_crc(ib, lb, jb);
  var mb:int = 280;
  var nb:int_ptr = w + mb;
  var ob:int = nb[0];
  var pb:int = e.a;
  var qb:int = 47;
  var rb:int = w + qb;
  transparent_crc(ob, rb, pb);
  var sb:int = 284;
  var tb:int_ptr = w + sb;
  var ub:int = tb[0];
  var vb:int = e.a;
  var wb:int = 138;
  var xb:int = w + wb;
  transparent_crc(ub, xb, vb);
  var yb:int = 288;
  var zb:ushort_ptr = w + yb;
  var ac:int = zb[0];
  var bc:int = e.a;
  var cc:int = 188;
  var dc:int = w + cc;
  transparent_crc(ac, dc, bc);
  var ec:int = 290;
  var fc:ubyte_ptr = w + ec;
  var gc:int = fc[0];
  var hc:int = e.a;
  var ic:int = 24;
  var jc:int = w + ic;
  transparent_crc(gc, jc, hc);
  var kc:int = 291;
  var lc:byte_ptr = w + kc;
  var mc:int = lc[0];
  var nc:int = e.a;
  var oc:int = 126;
  var pc:int = w + oc;
  transparent_crc(mc, pc, nc);
  var qc:int = 292;
  var rc:short_ptr = w + qc;
  var sc:int = rc[0];
  var tc:int = e.a;
  var uc:int = 98;
  var vc:int = w + uc;
  transparent_crc(sc, vc, tc);
  var wc:int = 296;
  var xc:int_ptr = w + wc;
  var yc:int = xc[0];
  var zc:int = e.a;
  var ad:int = 12;
  var bd:int = w + ad;
  transparent_crc(yc, bd, zc);
  var cd:int = 300;
  var dd:ushort_ptr = w + cd;
  var ed:int = dd[0];
  var fd:int = e.a;
  var gd:int = 52;
  var hd:int = w + gd;
  transparent_crc(ed, hd, fd);
  var id:int = 304;
  var jd:int_ptr = w + id;
  var kd:int = jd[0];
  var ld:int = e.a;
  var md:int = 35;
  var nd:int = w + md;
  transparent_crc(kd, nd, ld);
  var od:int = 308;
  var pd:int_ptr = w + od;
  var qd:int = pd[0];
  var rd:int = e.a;
  var sd:int = 6;
  var td:int = w + sd;
  transparent_crc(qd, td, rd);
  var ud:int = 312;
  var vd:int_ptr = w + ud;
  var wd:int = vd[0];
  var xd:int = e.a;
  var yd:int = 199;
  var zd:int = w + yd;
  transparent_crc(wd, zd, xd);
  var ae:int = 316;
  var be:int_ptr = w + ae;
  var ce:int = be[0];
  var de:int = e.a;
  var ee:int = 86;
  var fe:int = w + ee;
  transparent_crc(ce, fe, de);
  var ge:int = 320;
  var he:ubyte_ptr = w + ge;
  var ie:int = he[0];
  var je:int = e.a;
  var ke:int = 0;
  var le:int = w + ke;
  transparent_crc(ie, le, je);
  var me:int = 322;
  var ne:short_ptr = w + me;
  var oe:int = ne[0];
  var pe:int = e.a;
  var qe:int = 75;
  var re:int = w + qe;
  transparent_crc(oe, re, pe);
  var se:int = 324;
  var te:byte_ptr = w + se;
  var ue:int = te[0];
  var ve:int = e.a;
  var we:int = 193;
  var xe:int = w + we;
  transparent_crc(ue, xe, ve);
  var ye:int = 328;
  var ze:int_ptr = w + ye;
  var af:int = ze[0];
  var bf:int = e.a;
  var cf:int = 176;
  var df:int = w + cf;
  transparent_crc(af, df, bf);
  var ef:int = 332;
  var ff:int_ptr = w + ef;
  var gf:int = ff[0];
  var hf:int = e.a;
  var if:int = 154;
  var jf:int = w + if;
  transparent_crc(gf, jf, hf);
  var kf:int = 336;
  var lf:short_ptr = w + kf;
  var mf:int = lf[0];
  var nf:int = e.a;
  var of:int = 104;
  var pf:int = w + of;
  transparent_crc(mf, pf, nf);
  var qf:int = 338;
  var rf:ushort_ptr = w + qf;
  var sf:int = rf[0];
  var tf:int = e.a;
  var uf:int = 69;
  var vf:int = w + uf;
  transparent_crc(sf, vf, tf);
  var wf:int = 340;
  var xf:byte_ptr = w + wf;
  var yf:int = xf[0];
  var zf:int = e.a;
  var ag:int = 18;
  var bg:int = w + ag;
  transparent_crc(yf, bg, zf);
  var cg:int = 341;
  var dg:ubyte_ptr = w + cg;
  var eg:int = dg[0];
  var fg:int = e.a;
  var gg:int = 182;
  var hg:int = w + gg;
  transparent_crc(eg, hg, fg);
  var ig:int = 342;
  var jg:ubyte_ptr = w + ig;
  var kg:int = jg[0];
  var lg:int = e.a;
  var mg:int = 165;
  var ng:int = w + mg;
  transparent_crc(kg, ng, lg);
  var og:int = 344;
  var pg:int_ptr = w + og;
  var qg:int = pg[0];
  var rg:int = e.a;
  var sg:int = 143;
  var tg:int = w + sg;
  transparent_crc(qg, tg, rg);
  var ug:int = 348;
  var vg:int_ptr = w + ug;
  var wg:int = vg[0];
  var xg:int = e.a;
  var yg:int = 115;
  var zg:int = w + yg;
  transparent_crc(wg, zg, xg);
  var ah:int = 352;
  var bh:int_ptr = w + ah;
  var ch:int = bh[0];
  var dh:int = e.a;
  var eh:int = 92;
  var fh:int = w + eh;
  transparent_crc(ch, fh, dh);
  var gh:int = 356;
  var hh:byte_ptr = w + gh;
  var ih:int = hh[0];
  var jh:int = e.a;
  var kh:int = 132;
  var lh:int = w + kh;
  transparent_crc(ih, lh, jh);
  var mh:int = 357;
  var nh:byte_ptr = w + mh;
  var oh:int = nh[0];
  var ph:int = e.a;
  var qh:int = 63;
  var rh:int = w + qh;
  transparent_crc(oh, rh, ph);
  var sh:int = 358;
  var th:ubyte_ptr = w + sh;
  var uh:int = th[0];
  var vh:int = e.a;
  var wh:int = 29;
  var xh:int = w + wh;
  transparent_crc(uh, xh, vh);
  var yh:int = 368;
  var zh:int_ptr = w + yh;
  var ai:int = zh[0];
  var bi:int = e.a;
  var ci:int = 41;
  var di:int = w + ci;
  transparent_crc(ai, di, bi);
  var ei:int = 360;
  var fi:int_ptr = w + ei;
  var gi:int = fi[0];
  var hi:int = -1;
  var ii:int = gi ^ hi;
  var ji:int = e.a;
  platform_main_end(ii, ji);
  var ki:int = 0;
  var li:int = 16;
  var mi:int = e + li;
  stack_pointer = mi;
  return ki;
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
    var na:int = 384;
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
  var j:int = 360;
  var k:int = memory_base;
  var l:int_ptr = k + j;
  var m:int = l[0];
  var n:int = -1;
  var o:int = m ^ n;
  f[1] = o;
  f[0] = i;
  var p:int = 220;
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
  var g:int = 205;
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
  var e:int = 360;
  var f:int = memory_base;
  var g:int_ptr = f + e;
  var h:int = g[0];
  var i:int = 8;
  var j:int = h >> i;
  var k:int = d[15]:ubyte;
  var l:int = h ^ k;
  var m:int = 255;
  var n:int = l & m;
  var o:int = 384;
  var p:int = f + o;
  var q:int = 2;
  var r:int = n << q;
  var s:int_ptr = p + r;
  var t:int = s[0];
  var u:int = j ^ t;
  g[0] = u;
}

