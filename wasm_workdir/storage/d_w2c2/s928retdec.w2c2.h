#ifndef s928retdec_H
#define s928retdec_H

#include "w2c2_base.h"

typedef struct s928retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s928retdecInstance;

void f0(s928retdecInstance*);

void f1(s928retdecInstance*);

U32 f2(s928retdecInstance*);

void f3(s928retdecInstance*,U32);

U32 f4(s928retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s928retdecInstance*,U32,U32,U32,U32,U32);

void f6(s928retdecInstance*,U32);

void f7(s928retdecInstance*,U32,U32,U32);

void f8(s928retdecInstance*,U32,U32,U32);

void s928retdec____wasm_call_ctors(s928retdecInstance*i);

void s928retdec____wasm_apply_data_relocs(s928retdecInstance*i);

U32 s928retdec_func_1(s928retdecInstance*i);

void s928retdec_call_cb(s928retdecInstance*i,U32 l0);

void s928retdecInstantiate(s928retdecInstance* instance, void* resolve(const char* module, const char* name));

void s928retdecFreeInstance(s928retdecInstance* instance);

#endif /* s928retdec_H */

