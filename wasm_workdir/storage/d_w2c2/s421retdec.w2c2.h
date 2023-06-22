#ifndef s421retdec_H
#define s421retdec_H

#include "w2c2_base.h"

typedef struct s421retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s421retdecInstance;

void f0(s421retdecInstance*);

void f1(s421retdecInstance*);

U32 f2(s421retdecInstance*);

void f3(s421retdecInstance*,U32);

U32 f4(s421retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s421retdecInstance*,U32,U32,U32,U32,U32);

void f6(s421retdecInstance*,U32);

void f7(s421retdecInstance*,U32,U32,U32);

void f8(s421retdecInstance*,U32,U32,U32);

void s421retdec____wasm_call_ctors(s421retdecInstance*i);

void s421retdec____wasm_apply_data_relocs(s421retdecInstance*i);

U32 s421retdec_func_1(s421retdecInstance*i);

void s421retdec_call_cb(s421retdecInstance*i,U32 l0);

void s421retdecInstantiate(s421retdecInstance* instance, void* resolve(const char* module, const char* name));

void s421retdecFreeInstance(s421retdecInstance* instance);

#endif /* s421retdec_H */

