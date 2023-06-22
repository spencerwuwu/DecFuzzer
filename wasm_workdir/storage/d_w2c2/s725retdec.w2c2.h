#ifndef s725retdec_H
#define s725retdec_H

#include "w2c2_base.h"

typedef struct s725retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s725retdecInstance;

void f0(s725retdecInstance*);

void f1(s725retdecInstance*);

U32 f2(s725retdecInstance*);

void f3(s725retdecInstance*,U32);

void f4(s725retdecInstance*,U32);

void s725retdec____wasm_call_ctors(s725retdecInstance*i);

void s725retdec____wasm_apply_data_relocs(s725retdecInstance*i);

U32 s725retdec_func_1(s725retdecInstance*i);

void s725retdec_call_cb(s725retdecInstance*i,U32 l0);

void s725retdecInstantiate(s725retdecInstance* instance, void* resolve(const char* module, const char* name));

void s725retdecFreeInstance(s725retdecInstance* instance);

#endif /* s725retdec_H */

