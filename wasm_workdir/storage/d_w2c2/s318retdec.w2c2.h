#ifndef s318retdec_H
#define s318retdec_H

#include "w2c2_base.h"

typedef struct s318retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s318retdecInstance;

void f0(s318retdecInstance*);

void f1(s318retdecInstance*);

U32 f2(s318retdecInstance*);

void f3(s318retdecInstance*,U32);

U32 f4(s318retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s318retdecInstance*,U32,U32,U32,U32,U32);

void f6(s318retdecInstance*,U32);

void f7(s318retdecInstance*,U32,U32,U32);

void f8(s318retdecInstance*,U32,U32,U32);

void s318retdec____wasm_call_ctors(s318retdecInstance*i);

void s318retdec____wasm_apply_data_relocs(s318retdecInstance*i);

U32 s318retdec_func_1(s318retdecInstance*i);

void s318retdec_call_cb(s318retdecInstance*i,U32 l0);

void s318retdecInstantiate(s318retdecInstance* instance, void* resolve(const char* module, const char* name));

void s318retdecFreeInstance(s318retdecInstance* instance);

#endif /* s318retdec_H */

