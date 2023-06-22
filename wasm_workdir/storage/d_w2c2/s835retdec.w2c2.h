#ifndef s835retdec_H
#define s835retdec_H

#include "w2c2_base.h"

typedef struct s835retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s835retdecInstance;

void f0(s835retdecInstance*);

void f1(s835retdecInstance*);

U32 f2(s835retdecInstance*);

void f3(s835retdecInstance*,U32);

void f4(s835retdecInstance*,U32);

void s835retdec____wasm_call_ctors(s835retdecInstance*i);

void s835retdec____wasm_apply_data_relocs(s835retdecInstance*i);

U32 s835retdec_func_1(s835retdecInstance*i);

void s835retdec_call_cb(s835retdecInstance*i,U32 l0);

void s835retdecInstantiate(s835retdecInstance* instance, void* resolve(const char* module, const char* name));

void s835retdecFreeInstance(s835retdecInstance* instance);

#endif /* s835retdec_H */

