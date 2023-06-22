#ifndef s338retdec_H
#define s338retdec_H

#include "w2c2_base.h"

typedef struct s338retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s338retdecInstance;

void f0(s338retdecInstance*);

void f1(s338retdecInstance*);

U32 f2(s338retdecInstance*);

void f3(s338retdecInstance*,U32);

U32 f4(s338retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s338retdecInstance*,U32,U32,U32,U32,U32);

void f6(s338retdecInstance*,U32);

void f7(s338retdecInstance*,U32,U32,U32);

void f8(s338retdecInstance*,U32,U32,U32);

void s338retdec____wasm_call_ctors(s338retdecInstance*i);

void s338retdec____wasm_apply_data_relocs(s338retdecInstance*i);

U32 s338retdec_func_1(s338retdecInstance*i);

void s338retdec_call_cb(s338retdecInstance*i,U32 l0);

void s338retdecInstantiate(s338retdecInstance* instance, void* resolve(const char* module, const char* name));

void s338retdecFreeInstance(s338retdecInstance* instance);

#endif /* s338retdec_H */

