#ifndef s4retdec_H
#define s4retdec_H

#include "w2c2_base.h"

typedef struct s4retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s4retdecInstance;

void f0(s4retdecInstance*);

void f1(s4retdecInstance*);

U32 f2(s4retdecInstance*);

void f3(s4retdecInstance*,U32);

void f4(s4retdecInstance*,U32);

void s4retdec____wasm_call_ctors(s4retdecInstance*i);

void s4retdec____wasm_apply_data_relocs(s4retdecInstance*i);

U32 s4retdec_func_1(s4retdecInstance*i);

void s4retdec_call_cb(s4retdecInstance*i,U32 l0);

void s4retdecInstantiate(s4retdecInstance* instance, void* resolve(const char* module, const char* name));

void s4retdecFreeInstance(s4retdecInstance* instance);

#endif /* s4retdec_H */

