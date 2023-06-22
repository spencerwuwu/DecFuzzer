#ifndef s294retdec_H
#define s294retdec_H

#include "w2c2_base.h"

typedef struct s294retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s294retdecInstance;

void f0(s294retdecInstance*);

void f1(s294retdecInstance*);

U32 f2(s294retdecInstance*);

void f3(s294retdecInstance*,U32);

U32 f4(s294retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s294retdecInstance*,U32,U32,U32,U32,U32);

void f6(s294retdecInstance*,U32);

void f7(s294retdecInstance*,U32,U32,U32);

void f8(s294retdecInstance*,U32,U32,U32);

void s294retdec____wasm_call_ctors(s294retdecInstance*i);

void s294retdec____wasm_apply_data_relocs(s294retdecInstance*i);

U32 s294retdec_func_1(s294retdecInstance*i);

void s294retdec_call_cb(s294retdecInstance*i,U32 l0);

void s294retdecInstantiate(s294retdecInstance* instance, void* resolve(const char* module, const char* name));

void s294retdecFreeInstance(s294retdecInstance* instance);

#endif /* s294retdec_H */

