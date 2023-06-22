#ifndef s832retdec_H
#define s832retdec_H

#include "w2c2_base.h"

typedef struct s832retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s832retdecInstance;

void f0(s832retdecInstance*);

void f1(s832retdecInstance*);

U32 f2(s832retdecInstance*);

void f3(s832retdecInstance*,U32);

U32 f4(s832retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s832retdecInstance*,U32,U32,U32,U32,U32);

void f6(s832retdecInstance*,U32);

void f7(s832retdecInstance*,U32,U32,U32);

void f8(s832retdecInstance*,U32,U32,U32);

void s832retdec____wasm_call_ctors(s832retdecInstance*i);

void s832retdec____wasm_apply_data_relocs(s832retdecInstance*i);

U32 s832retdec_func_1(s832retdecInstance*i);

void s832retdec_call_cb(s832retdecInstance*i,U32 l0);

void s832retdecInstantiate(s832retdecInstance* instance, void* resolve(const char* module, const char* name));

void s832retdecFreeInstance(s832retdecInstance* instance);

#endif /* s832retdec_H */

