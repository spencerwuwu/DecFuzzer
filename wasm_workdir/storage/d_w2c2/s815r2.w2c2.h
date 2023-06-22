#ifndef s815r2_H
#define s815r2_H

#include "w2c2_base.h"

typedef struct s815r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s815r2Instance;

void f0(s815r2Instance*);

void f1(s815r2Instance*);

U32 f2(s815r2Instance*);

void f3(s815r2Instance*,U32);

U32 f4(s815r2Instance*,U32,U32,U32);

void f5(s815r2Instance*,U32,U32,U32,U32,U32);

void f6(s815r2Instance*,U32);

void f7(s815r2Instance*,U32,U32,U32);

void f8(s815r2Instance*,U32,U32,U32);

void s815r2____wasm_call_ctors(s815r2Instance*i);

void s815r2____wasm_apply_data_relocs(s815r2Instance*i);

U32 s815r2_func_1(s815r2Instance*i);

void s815r2_call_cb(s815r2Instance*i,U32 l0);

void s815r2Instantiate(s815r2Instance* instance, void* resolve(const char* module, const char* name));

void s815r2FreeInstance(s815r2Instance* instance);

#endif /* s815r2_H */

