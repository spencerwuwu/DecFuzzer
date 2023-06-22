#ifndef s180retdec_H
#define s180retdec_H

#include "w2c2_base.h"

typedef struct s180retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s180retdecInstance;

void f0(s180retdecInstance*);

void f1(s180retdecInstance*);

U32 f2(s180retdecInstance*);

void f3(s180retdecInstance*,U32);

U32 f4(s180retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s180retdecInstance*,U32,U32,U32,U32,U32);

void f6(s180retdecInstance*,U32);

void f7(s180retdecInstance*,U32,U32,U32);

void f8(s180retdecInstance*,U32,U32,U32);

void s180retdec____wasm_call_ctors(s180retdecInstance*i);

void s180retdec____wasm_apply_data_relocs(s180retdecInstance*i);

U32 s180retdec_func_1(s180retdecInstance*i);

void s180retdec_call_cb(s180retdecInstance*i,U32 l0);

void s180retdecInstantiate(s180retdecInstance* instance, void* resolve(const char* module, const char* name));

void s180retdecFreeInstance(s180retdecInstance* instance);

#endif /* s180retdec_H */

