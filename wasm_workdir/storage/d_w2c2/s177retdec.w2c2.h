#ifndef s177retdec_H
#define s177retdec_H

#include "w2c2_base.h"

typedef struct s177retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s177retdecInstance;

void f0(s177retdecInstance*);

void f1(s177retdecInstance*);

U32 f2(s177retdecInstance*);

void f3(s177retdecInstance*,U32);

U32 f4(s177retdecInstance*,U32,U32,U32,U32);

void f5(s177retdecInstance*,U32,U32,U32,U32,U32);

void f6(s177retdecInstance*,U32);

void f7(s177retdecInstance*,U32,U32,U32);

void f8(s177retdecInstance*,U32,U32,U32);

void s177retdec____wasm_call_ctors(s177retdecInstance*i);

void s177retdec____wasm_apply_data_relocs(s177retdecInstance*i);

U32 s177retdec_func_1(s177retdecInstance*i);

void s177retdec_call_cb(s177retdecInstance*i,U32 l0);

void s177retdecInstantiate(s177retdecInstance* instance, void* resolve(const char* module, const char* name));

void s177retdecFreeInstance(s177retdecInstance* instance);

#endif /* s177retdec_H */

