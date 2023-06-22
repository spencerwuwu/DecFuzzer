#ifndef s760retdec_H
#define s760retdec_H

#include "w2c2_base.h"

typedef struct s760retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s760retdecInstance;

void f0(s760retdecInstance*);

void f1(s760retdecInstance*);

U32 f2(s760retdecInstance*);

void f3(s760retdecInstance*,U32);

U32 f4(s760retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s760retdecInstance*,U32,U32,U32,U32,U32);

void f6(s760retdecInstance*,U32);

void f7(s760retdecInstance*,U32,U32,U32);

void f8(s760retdecInstance*,U32,U32,U32);

void s760retdec____wasm_call_ctors(s760retdecInstance*i);

void s760retdec____wasm_apply_data_relocs(s760retdecInstance*i);

U32 s760retdec_func_1(s760retdecInstance*i);

void s760retdec_call_cb(s760retdecInstance*i,U32 l0);

void s760retdecInstantiate(s760retdecInstance* instance, void* resolve(const char* module, const char* name));

void s760retdecFreeInstance(s760retdecInstance* instance);

#endif /* s760retdec_H */

