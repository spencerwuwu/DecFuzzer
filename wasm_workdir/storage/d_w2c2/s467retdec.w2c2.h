#ifndef s467retdec_H
#define s467retdec_H

#include "w2c2_base.h"

typedef struct s467retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s467retdecInstance;

void f0(s467retdecInstance*);

void f1(s467retdecInstance*);

U32 f2(s467retdecInstance*);

void f3(s467retdecInstance*,U32);

U32 f4(s467retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s467retdecInstance*,U32,U32,U32,U32,U32);

void f6(s467retdecInstance*,U32);

void f7(s467retdecInstance*,U32,U32,U32);

void f8(s467retdecInstance*,U32,U32,U32);

void s467retdec____wasm_call_ctors(s467retdecInstance*i);

void s467retdec____wasm_apply_data_relocs(s467retdecInstance*i);

U32 s467retdec_func_1(s467retdecInstance*i);

void s467retdec_call_cb(s467retdecInstance*i,U32 l0);

void s467retdecInstantiate(s467retdecInstance* instance, void* resolve(const char* module, const char* name));

void s467retdecFreeInstance(s467retdecInstance* instance);

#endif /* s467retdec_H */

