#ifndef s156retdec_H
#define s156retdec_H

#include "w2c2_base.h"

typedef struct s156retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s156retdecInstance;

void f0(s156retdecInstance*);

void f1(s156retdecInstance*);

U32 f2(s156retdecInstance*);

void f3(s156retdecInstance*,U32);

U32 f4(s156retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s156retdecInstance*,U32,U32,U32,U32,U32);

void f6(s156retdecInstance*,U32);

void f7(s156retdecInstance*,U32,U32,U32);

void f8(s156retdecInstance*,U32,U32,U32);

void s156retdec____wasm_call_ctors(s156retdecInstance*i);

void s156retdec____wasm_apply_data_relocs(s156retdecInstance*i);

U32 s156retdec_func_1(s156retdecInstance*i);

void s156retdec_call_cb(s156retdecInstance*i,U32 l0);

void s156retdecInstantiate(s156retdecInstance* instance, void* resolve(const char* module, const char* name));

void s156retdecFreeInstance(s156retdecInstance* instance);

#endif /* s156retdec_H */

