#ifndef s47retdec_H
#define s47retdec_H

#include "w2c2_base.h"

typedef struct s47retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s47retdecInstance;

void f0(s47retdecInstance*);

void f1(s47retdecInstance*);

U32 f2(s47retdecInstance*);

void f3(s47retdecInstance*,U32);

U32 f4(s47retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s47retdecInstance*,U32,U32,U32,U32,U32);

void f6(s47retdecInstance*,U32);

void f7(s47retdecInstance*,U32,U32,U32);

void f8(s47retdecInstance*,U32,U32,U32);

void s47retdec____wasm_call_ctors(s47retdecInstance*i);

void s47retdec____wasm_apply_data_relocs(s47retdecInstance*i);

U32 s47retdec_func_1(s47retdecInstance*i);

void s47retdec_call_cb(s47retdecInstance*i,U32 l0);

void s47retdecInstantiate(s47retdecInstance* instance, void* resolve(const char* module, const char* name));

void s47retdecFreeInstance(s47retdecInstance* instance);

#endif /* s47retdec_H */

