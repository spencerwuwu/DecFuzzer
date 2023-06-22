#ifndef s103retdec_H
#define s103retdec_H

#include "w2c2_base.h"

typedef struct s103retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s103retdecInstance;

void f0(s103retdecInstance*);

void f1(s103retdecInstance*);

U32 f2(s103retdecInstance*);

void f3(s103retdecInstance*,U32);

void f4(s103retdecInstance*,U32);

void s103retdec____wasm_call_ctors(s103retdecInstance*i);

void s103retdec____wasm_apply_data_relocs(s103retdecInstance*i);

U32 s103retdec_func_1(s103retdecInstance*i);

void s103retdec_call_cb(s103retdecInstance*i,U32 l0);

void s103retdecInstantiate(s103retdecInstance* instance, void* resolve(const char* module, const char* name));

void s103retdecFreeInstance(s103retdecInstance* instance);

#endif /* s103retdec_H */

