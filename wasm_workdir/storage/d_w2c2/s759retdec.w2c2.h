#ifndef s759retdec_H
#define s759retdec_H

#include "w2c2_base.h"

typedef struct s759retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s759retdecInstance;

void f0(s759retdecInstance*);

void f1(s759retdecInstance*);

U32 f2(s759retdecInstance*);

void f3(s759retdecInstance*,U32);

U32 f4(s759retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s759retdecInstance*,U32,U32,U32,U32,U32);

void f6(s759retdecInstance*,U32);

void f7(s759retdecInstance*,U32,U32,U32);

void f8(s759retdecInstance*,U32,U32,U32);

void s759retdec____wasm_call_ctors(s759retdecInstance*i);

void s759retdec____wasm_apply_data_relocs(s759retdecInstance*i);

U32 s759retdec_func_1(s759retdecInstance*i);

void s759retdec_call_cb(s759retdecInstance*i,U32 l0);

void s759retdecInstantiate(s759retdecInstance* instance, void* resolve(const char* module, const char* name));

void s759retdecFreeInstance(s759retdecInstance* instance);

#endif /* s759retdec_H */

