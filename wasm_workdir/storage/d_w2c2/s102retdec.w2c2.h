#ifndef s102retdec_H
#define s102retdec_H

#include "w2c2_base.h"

typedef struct s102retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s102retdecInstance;

void f0(s102retdecInstance*);

void f1(s102retdecInstance*);

U32 f2(s102retdecInstance*);

void f3(s102retdecInstance*,U32);

U32 f4(s102retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s102retdecInstance*,U32,U32,U32,U32,U32);

void f6(s102retdecInstance*,U32);

void f7(s102retdecInstance*,U32,U32,U32);

void f8(s102retdecInstance*,U32,U32,U32);

void s102retdec____wasm_call_ctors(s102retdecInstance*i);

void s102retdec____wasm_apply_data_relocs(s102retdecInstance*i);

U32 s102retdec_func_1(s102retdecInstance*i);

void s102retdec_call_cb(s102retdecInstance*i,U32 l0);

void s102retdecInstantiate(s102retdecInstance* instance, void* resolve(const char* module, const char* name));

void s102retdecFreeInstance(s102retdecInstance* instance);

#endif /* s102retdec_H */

