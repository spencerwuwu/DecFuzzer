#ifndef s267retdec_H
#define s267retdec_H

#include "w2c2_base.h"

typedef struct s267retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s267retdecInstance;

void f0(s267retdecInstance*);

void f1(s267retdecInstance*);

U32 f2(s267retdecInstance*);

void f3(s267retdecInstance*,U32);

U32 f4(s267retdecInstance*,U32,U32,U32,U32);

void f5(s267retdecInstance*,U32,U32,U32,U32,U32);

void f6(s267retdecInstance*,U32);

void f7(s267retdecInstance*,U32,U32,U32);

void f8(s267retdecInstance*,U32,U32,U32);

void s267retdec____wasm_call_ctors(s267retdecInstance*i);

void s267retdec____wasm_apply_data_relocs(s267retdecInstance*i);

U32 s267retdec_func_1(s267retdecInstance*i);

void s267retdec_call_cb(s267retdecInstance*i,U32 l0);

void s267retdecInstantiate(s267retdecInstance* instance, void* resolve(const char* module, const char* name));

void s267retdecFreeInstance(s267retdecInstance* instance);

#endif /* s267retdec_H */

