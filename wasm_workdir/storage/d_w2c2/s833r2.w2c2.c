#include "w2c2_base.h"

#include "s833r2.w2c2.h"

void f0(s833r2Instance*i) {
L0:;
}

void f1(s833r2Instance*i) {
L0:;
}

U32 f2(s833r2Instance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l0=si0;
si0=1040U;
l1=si0;
si0=l0;
si1=l1;
si0-=si1;
l2=si0;
si0=l2;
(*i->env_____stack_pointer)=si0;
si0=-1U;
l3=si0;
si0=l2;
si1=l3;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=16U;
l4=si0;
si0=l2;
si1=l4;
si0+=si1;
l5=si0;
si0=l5;
f3(i,si0);
si0=3U;
l6=si0;
si0=l2;
si1=l6;
i32_store16(i->env__memory,(U64)si0+10U,si1);
si0=l2;
si1=l3;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=9U;
l7=si0;
si0=l2;
si1=l7;
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l2;
si0=i32_load8_u(i->env__memory,(U64)si0+3U);
l8=si0;
si0=l8;
si1=l3;
si0+=si1;
l9=si0;
si0=l2;
si1=l9;
i32_store8(i->env__memory,(U64)si0+3U,si1);
si0=l2;
si0=i32_load(i->env__memory,(U64)si0+12U);
l10=si0;
si0=-1U;
l11=si0;
si0=l10;
si1=l11;
si0^=si1;
l12=si0;
si0=1040U;
l13=si0;
si0=l2;
si1=l13;
si0+=si1;
l14=si0;
si0=l14;
(*i->env_____stack_pointer)=si0;
si0=l12;
goto L0;
L0:;
return si0;
}

void f3(s833r2Instance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l1=si0;
si0=32U;
l2=si0;
si0=l1;
si1=l2;
si0-=si1;
l3=si0;
si0=l3;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=-306674912U;
l4=si0;
si0=l3;
si1=l4;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=0U;
l5=si0;
si0=l3;
si1=l5;
i32_store(i->env__memory,(U64)si0+16U,si1);
L2:;
{
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l6=si0;
si0=256U;
l7=si0;
si0=l6;
l8=si0;
si0=l7;
l9=si0;
si0=l8;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
l10=si0;
si0=1U;
l11=si0;
si0=l10;
si1=l11;
si0&=si1;
l12=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l13=si0;
si0=l3;
si1=l13;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=8U;
l14=si0;
si0=l3;
si1=l14;
i32_store(i->env__memory,(U64)si0+12U,si1);
L4:;
{
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l15=si0;
si0=0U;
l16=si0;
si0=l15;
l17=si0;
si0=l16;
l18=si0;
si0=l17;
si1=l18;
si0=(U32)((I32)si0>(I32)si1);
l19=si0;
si0=1U;
l20=si0;
si0=l19;
si1=l20;
si0&=si1;
l21=si0;
si0=l21;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l22=si0;
si0=1U;
l23=si0;
si0=l22;
si1=l23;
si0&=si1;
l24=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l25=si0;
si0=1U;
l26=si0;
si0=l25;
si1=l26;
si0>>=(si1&31);
l27=si0;
si0=-306674912U;
l28=si0;
si0=l27;
si1=l28;
si0^=si1;
l29=si0;
si0=l3;
si1=l29;
i32_store(i->env__memory,(U64)si0+24U,si1);
goto L5;
L6:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l30=si0;
si0=1U;
l31=si0;
si0=l30;
si1=l31;
si0>>=(si1&31);
l32=si0;
si0=l3;
si1=l32;
i32_store(i->env__memory,(U64)si0+24U,si1);
L5:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l33=si0;
si0=-1U;
l34=si0;
si0=l33;
si1=l34;
si0+=si1;
l35=si0;
si0=l3;
si1=l35;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l36=si0;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+28U);
l37=si0;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l38=si0;
si0=2U;
l39=si0;
si0=l38;
si1=l39;
si0<<=(si1&31);
l40=si0;
si0=l37;
si1=l40;
si0+=si1;
l41=si0;
si0=l41;
si1=l36;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l42=si0;
si0=1U;
l43=si0;
si0=l42;
si1=l43;
si0+=si1;
l44=si0;
si0=l3;
si1=l44;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

void f4(s833r2Instance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l1=si0;
si0=16U;
l2=si0;
si0=l1;
si1=l2;
si0-=si1;
l3=si0;
si0=l3;
(*i->env_____stack_pointer)=si0;
si0=l3;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l4=si0;
si0=0U;
l5=si0;
si0=(*i->env_____memory_base);
l6=si0;
si0=l6;
si1=l5;
si0+=si1;
l7=si0;
si0=l7;
si1=l4;
TF((*i->env_____indirect_function_table),si1,void (*)(s833r2Instance*,U32))(i,si0);
si0=16U;
l8=si0;
si0=l3;
si1=l8;
si0+=si1;
l9=si0;
si0=l9;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

const U8 d0[]={
0x44,0x75,0x6d,0x6d,0x79,0x20,0x66,0x6f,0x72,0x20,0x69,0x6e,0x64,0x69,0x72,0x65,0x63,0x74,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x74,0x61,0x62,0x6c,0x65,0x0,
};

static void s833r2InitImports(s833r2Instance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____indirect_function_table=(wasmTable*)resolve("env", "__indirect_function_table");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
}

void s833r2____wasm_call_ctors(s833r2Instance*i){
f0(i);
}

void s833r2____wasm_apply_data_relocs(s833r2Instance*i){
f1(i);
}

U32 s833r2_func_1(s833r2Instance*i){
return f2(i);
}

void s833r2_call_cb(s833r2Instance*i,U32 l0){
f4(i,l0);
}

void s833r2Instantiate(s833r2Instance* i, void* resolve(const char* module, const char* name)) {
s833r2InitImports(i, resolve);
}

void s833r2FreeInstance(s833r2Instance* i) {
}

