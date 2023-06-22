#ifndef s673retdec_H
#define s673retdec_H

#include "w2c2_base.h"

typedef struct s673retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s673retdecInstance;

void f0(s673retdecInstance*);

void f1(s673retdecInstance*);

U32 f2(s673retdecInstance*);

void f3(s673retdecInstance*,U32);

U32 f4(s673retdecInstance*,U32,U32,U32,U32,U32);

void f5(s673retdecInstance*,U32,U32,U32,U32,U32);

void f6(s673retdecInstance*,U32);

void f7(s673retdecInstance*,U32,U32,U32);

void f8(s673retdecInstance*,U32,U32,U32);

void s673retdec____wasm_call_ctors(s673retdecInstance*i);

void s673retdec____wasm_apply_data_relocs(s673retdecInstance*i);

U32 s673retdec_func_1(s673retdecInstance*i);

void s673retdec_call_cb(s673retdecInstance*i,U32 l0);

void s673retdecInstantiate(s673retdecInstance* instance, void* resolve(const char* module, const char* name));

void s673retdecFreeInstance(s673retdecInstance* instance);

#endif /* s673retdec_H */

